#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10

int main()
{
    short iq[2*N];
    srand(time(NULL));

    for (int i = 0; i < N; i++)
    {
        iq[2*i] = rand() % 32768 * 2 - 32768;
        iq[2*i+1] = rand() % 32768 * 2 - 32768;
    }

    for (int i = 0; i < N; i++)
    {
        printf("s[%d] = %.1f + j*(%.1f)\n", i, (float)iq[2*i], (float)iq[2*i+1]);
    }

    long long energy = 0;
    for (int i = 0; i < N; i++)
    {
        long long re = iq[2*i];
        long long im = iq[2*i+1];
        energy += re*re + im*im;
    }
    printf("Energy = %lld\n", energy);

    int max = iq[0];
    int max_idx = 0;
    for (int i = 1; i < N; i++)
    {
        if (iq[2*i] > max)
        {
            max = iq[2*i];
            max_idx = i;
        }
    }
    printf("Max re = %d, index = %d\n", max, max_idx);

    return 0;
}