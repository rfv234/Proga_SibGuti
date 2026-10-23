#include <stdio.h>

int main() {
	int a = 9;
	int n = 2;
	int flag = 0;
	while(a%n!=0)
	{
		n++;
		if (n==a) {flag = 1; break;}
	}
	printf("%d\n", flag);
	return 0;
//проверка на простое число
}
