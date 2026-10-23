#include <stdio.h>
#include <math.h>

int  main() {
	float x,y;
	printf("Введите координаты x и y: ");
	if (scanf("%f %f", &x, &y)==2) {
		float r = pow(x,2) + pow(y,2);
		if (x>=0 && y>=0 && r>=0.25 && r<=1) {
			printf("YES\n");
		} else {printf("NO\n");}
	}
	return 0;
}
