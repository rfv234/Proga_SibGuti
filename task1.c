#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10

int main()
{
    int re[N];
    int im[N];
    srand(time(NULL));

    for (int i = 0; i < N; i++)
    {
        re[i] = rand() % 32768 * 2 - 32768;
        im[i] = rand() % 32768 * 2 - 32768;
    }

    for (int i = 0; i < N; i++)
    {
        printf("s[%d] = %.1f + j*(%.1f)\n", i, (float)re[i], (float)im[i]);
    }

    long long energy = 0;
    for (int i = 0; i < N; i++)
    {
        energy += (long long)re[i] * re[i] + (long long)im[i] * im[i];
    }
    printf("Energy = %lld\n", energy);

    int max = re[0];
    int max_idx = 0;
    for (int i = 0; i < N; i++)
    {
        if (re[i] > max)
        {
            max = re[i];
            max_idx = i;
        }
    }
    printf("Max re = %d, index = %d\n", max, max_idx);

    return 0;
}