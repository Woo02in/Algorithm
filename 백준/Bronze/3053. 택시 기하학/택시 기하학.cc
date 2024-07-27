#define _USE_MATH_DEFINES
#include <iostream>
#include <math.h>

int main() {
	double r, S1, S2;
	scanf("%lf", &r);
	S1 = M_PI * r * r;
	S2 = r * r * 2;

	printf("%.6f\n", S1);
	printf("%.6f\n", S2);
	return 0;
}