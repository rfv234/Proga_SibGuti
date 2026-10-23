#include <stdio.h>

void printResult(int count, int sum)
{
    printf("\nКол-во цифр: %d\n", count);
    printf("Сумма цифр: %d\n", sum);
}

int main()
{
    char code[] = "A7-25-91-B4";
    int count = 0;
    int sum = 0;
    for (int i = 0; code[i] != '\0'; i++)
    {
        if (code[i]>='0' && code[i]<='9')
        {
            printf("%c ", code[i]);
            sum += code[i] - '0';
            count++;
        }        
    }
    printResult(count, sum);

    return 0;
}