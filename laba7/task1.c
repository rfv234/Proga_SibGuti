#include <stdio.h>

#define Max_Words 100
#define Max_Len 50

int splitw(const char *text, char words[][Max_Len])
{
    int count = 0;
    int len = 0;
    for (int i = 0;; i++)
    {
        char c = text[i];
        if (c != ' ' && c != '\t' && c != '\n' && c != '\0')
        {
            if (len < Max_Len - 1)
            {
                words[count][len++] = c;
            }
        }
        else
        {
            if (len > 0)
            {
                words[count][len] = '\0';
                count++;
                len = 0;
                if (count >= Max_Words)
                {
                    break;
                }
            }
        }
        if (c == '\0')
        {
            break;
        }
    }
    return count;
}
int sravWords(const char *a, const char *b)
{
    int i = 0;
    while (a[i] != '\0' && a[i] == b[i])
    {
        i++;
    }
    return a[i] - b[i];
}
void swapw(char *a, char *b)
{
    for (int i = 0; i < Max_Len; i++)
    {
        char hlp = a[i];
        a[i] = b[i];
        b[i] = hlp;
    }
}
void sortw(char words[][Max_Len], int count)
{
    for (int i = 0; i < count - 1; i++)
    {
        for (int j = 0; j < count - 1 - i; j++)
        {
            if (sravWords(words[j], words[j + 1]) > 0)
            {
                swapw(words[j], words[j + 1]);
            }
        }
    }
}
void printw(char words[][Max_Len], int count)
{
    printf("Слова по алфавиту:\n");
    for (int i = 0; i < count; i++)
    {
        printf("%s\n", words[i]);
    }
    printf("Кол-во слов: %d\n", count);
}

int main()
{
    char text[] = "orange apple banana kiwi";
    char words[Max_Words][Max_Len];

    int count = splitw(text, words);
    sortw(words, count);
    printw(words, count);

    return 0;
}