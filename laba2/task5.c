#include <stdio.h>

int main() {
	int s;
	int n;
	int a = 15;
	for (s=0, n=2; n<a; n++)
		if (a%n==0) s++;
	if (s==0) puts("1");
	else puts("0");
	return 0;
	// проверка на простое
}
