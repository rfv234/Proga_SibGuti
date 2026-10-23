#include <stdio.h>

void find(unsigned int n) {
    int count0 = 0;
    int count1 = 0;
    unsigned int temp = n;

    while (temp) {
        count1 += temp & 1;
        temp >>= 1;
    }

    count0 = 32 - count1;

    printf("Кол-во единичных битов: %d\n", count1);
    printf("Кол-во нулевых битов: %d\n", count0);
}

int main() {
    unsigned int a;
    printf("Введите число: ");
    scanf("%u", &a);
    find(a);
    return 0;
}