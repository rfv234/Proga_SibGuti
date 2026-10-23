#include <stdio.h>

int sdvig(int a, int k) {
	for (int i = 0; i < k; i++) {
		a = a << 1;
		a = a | 1;
	}
	return a;
}

int main() {
	int a;
	int k;
	printf("Введите число: ");
	scanf("%d", &a);
	printf("На сколько позиций сдвинуть биты? ");
	scanf("%d", &k);
	int res = sdvig(a,k);
	printf("Результат: %d\n", res);
	return 0;
}
