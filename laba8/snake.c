#include <stdio.h>
#include <stdlib.h> //malloc, realloc, free, rand, atoi
#include <string.h> //memmove
#include <time.h>   //случайные числа

#define UP 0
#define DOWN 1
#define LEFT 2
#define RIGHT 3

int rows, cols;

char *field = NULL;
int *body = NULL;
int len;
int dir;
int food;
int score;
int delay;
int game_over;

int getCoor(int x, int y)
{
    return y * cols + x;
}

int getX(int n)
{
    return n % cols;
}

int getY(int n)
{
    return n / cols;
}

void place_food()
{
    if (len == rows * cols)
    {
        game_over = 1;
        return;
    }
    int busy;
    int n;
    do
    {
        n = rand() % (rows * cols);
        busy = 0;
        for (int i = 0; i < len; i++)
        {
            if (body[i] == n)
                busy = 1;
        }
    } while (busy);
    food = n;
}

int game_init()
{
    field = malloc(rows * cols * sizeof(*field));
    if (field == NULL)
    {
        printf("Error: память не выделена\n");
        return -1;
    }

    len = 4;
    body = malloc(len * sizeof(*body));
    if (body == NULL)
    {
        printf("Error: память не выделена\n");
        free(field);
        field = NULL;
        return -1;
    }
    int y = rows / 2;
    dir = RIGHT;
    score = 0;
    delay = 300;
    game_over = 0;
    int start_x = cols / 2 - 2;
    if (start_x < 0)
        start_x = 0;
    for (int i = 0; i < len; i++)
    {
        body[i] = getCoor(start_x + i, y);
    }
    place_food();
    return 0;
}

void game_free()
{
    free(field);
    field = NULL;
    free(body);
    body = NULL;
}

void render()
{
    for (int i = 0; i < rows * cols; i++)
    {
        field[i] = ' ';
    }
    field[food] = '*';
    for (int k = 0; k < len - 1; k++)
    {
        field[body[k]] = 'o';
    }
    field[body[len - 1]] = '#';

    printf("\033[H\033[J");
    printf("+");
    for (int i = 0; i < cols; i++)
    {
        printf("-");
    }
    printf("+\n");

    for (int y = 0; y < rows; y++)
    {
        printf("|");
        for (int x = 0; x < cols; x++)
        {
            putchar(field[getCoor(x, y)]);
        }
        printf("|\n");
    }
    printf("+");
    for (int i = 0; i < cols; i++)
    {
        printf("-");
    }
    printf("+\n");
    printf("Score: %d\n", score);
    fflush(stdout);
}

int next_head()
{
    int x = getX(body[len - 1]);
    int y = getY(body[len - 1]);
    if (dir == UP)
        y--;
    else if (dir == DOWN)
        y++;
    else if (dir == LEFT)
        x--;
    else if (dir == RIGHT)
        x++;
    if (x < 0 || x >= cols || y < 0 || y >= rows)
    {
        return -1;
    }
    else
    {
        return getCoor(x, y);
    }
}

int hits_self(int next)
{
    for (int i = 1; i < len - 1; i++)
    {
        if (body[i] == next)
            return 1;
    }
    return 0;
}

void step()
{
    int next = next_head();
    if (next == -1)
    {
        game_over = 1;
        return;
    }
    if (hits_self(next))
    {
        game_over = 1;
        return;
    }

    int eating = (next == food);
    if (!eating && hits_self(next))
    {
        game_over = 1;
        return;
    }
    if (eating)
    {
        int *tmp = realloc(body, (len + 1) * sizeof(*body));
        if (tmp == NULL)
        {
            printf("Error: память не выделена\n");
            game_over = 1;
            return;
        }
        body = tmp;
        body[len] = next;
        len++;
        score++;
        if (delay > 50)
            delay -= 10;
        place_food();
    }
    else
    {
        memmove(body, body + 1, (len - 1) * sizeof(*body));
        body[len - 1] = next;
    }
}
void read_input()
{
    char c;
    if (scanf(" %c", &c) != 1)
    {
        game_over = 1;
        return;
    }
    if (c == 'w' && dir != DOWN)
        dir = UP;
    else if (c == 's' && dir != UP)
        dir = DOWN;
    else if (c == 'a' && dir != RIGHT)
        dir = LEFT;
    else if (c == 'd' && dir != LEFT)
        dir = RIGHT;
    else if (c == 'q')
        game_over = 1;
}

int main(int argc, char *argv[])
{
    rows = 10;
    cols = 20;
    if (argc >= 3)
    {
        int r = atoi(argv[1]);
        int c = atoi(argv[2]);
        if (r >= 5 && r <= 50 && c >= 5 && c <= 50)
        {
            rows = r;
            cols = c;
        }
    }

    srand(time(NULL));
    if (game_init() == -1)
    {
        return 1;
    }
    while (!game_over)
    {
        render();
        read_input();
        if (!game_over)
            step();
    }
    printf("Игра окончена. Счёт: %d\n", score);
    game_free();
    return 0;
}