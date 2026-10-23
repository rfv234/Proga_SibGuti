#include <stdio.h>

int main() {
	float temp = 0;
	char type;
	printf("Input temperature: ");
	if (scanf("%f%c", &temp, &type) == 2) {
		if (type == 'c' || type == 'C') {
			float far = (temp*9/5)+32;
			printf("Output temperature: %.1f\n", far);
		} else if (type == 'f' || type == 'F') {
				float cel = (temp - 32)*5/9;
				printf("Output temperature: %.1f\n", cel);
			} else {printf("Error\n");}
		} else {printf("Error\n");}

	return 0;
}
