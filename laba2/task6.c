#include <stdio.h>

int main() {
	int s;
	int n;
	int a = 15;
	for (s=0, n=2; n<a; n++)
		if (a%n==0) {s=1; break; }
	printf("%d\n", s);
	return 0;
	//проверка на простоту
}
