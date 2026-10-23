#include <stdio.h>

int main() {
	int n = 5;
	int s;
	int  i;
	for (s=1, i=1; i<=n; i++)
		s = s*i;
	printf("%d %d\n", n, s);
	return 0;
}
