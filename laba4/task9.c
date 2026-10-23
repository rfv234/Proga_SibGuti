#include <stdio.h>

int re(int a)
{
	int res = 0;
	for (int i = 0; i < 32; i++)
	{
		res = res << 1;
		res = res | (a & 1);
		a = a >> 1;
	}
	return res;
}

int main()
{
	int n;
	printf("Введите число: ");
	scanf("%d", &n);
	int res = re(n);
	printf("Результат: %d\n", res);
	return 0;
}
