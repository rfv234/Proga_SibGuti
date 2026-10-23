#include <stdio.h>

int main() {
	int a = 16;
	int n;
	for (n=2; n<a && a%n != 0; n++);
	if (n==2) puts("1");
	else puts("0");
	return 0;
	//проверка на простое или составное
}
