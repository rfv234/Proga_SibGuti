#include <stdio.h>

#define MAX 3

int main()
{
    float a[MAX][MAX];
    float b[MAX];
    float t[MAX][MAX];
    float d[MAX + 1];
    int n;

    printf("Введите размер матрицы: ");
    scanf("%d", &n);
    if (n < 2 || n > 3)
    {
        printf("Недопустимое значение: ");
        return 1;
    }

    printf("Введите коэффициенты: \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("a[%d][%d] = ", i + 1, j + 1);
            scanf("%f", &a[i][j]);
        }
    }

    printf("Введите свободные члены: \n");
    for (int i = 0; i < n; i++)
    {
        printf("b[%d] = ", i + 1);
        scanf("%f", &b[i]);
    }

    for (int k = 0; k <= n; k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                t[i][j] = a[i][j];
            }
        }
        if (k > 0)
        {
            for (int i = 0; i < n; i++)
            {
                t[i][k - 1] = b[i];
            }
        }
        if (n == 2)
        {
            d[k] = t[0][0] * t[1][1] - t[0][1] * t[1][0];
        }
        else
        {
            d[k] = t[0][0] * t[1][1] * t[2][2] + t[0][1] * t[1][2] * t[2][0] + t[0][2] * t[1][0] * t[2][1] - t[0][2] * t[1][1] * t[2][0] - t[0][1] * t[1][0] * t[2][2] - t[0][0] * t[1][2] * t[2][1];
        }
    }

    printf("\nD = %.2f\n", d[0]);

    if (d[0] == 0)
    {
        printf("\nНет единственного решения.\n");
        return 0;
    }

    printf("\nРешение: \n");
    for (int i = 1; i <= n; i++)
    {
        printf("x%d = %.2f\n", i, d[i] / d[0]);
    }
}