#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

using namespace std;

int main() {
	double a, b;
	scanf("%lf %lf", &a, &b);
	printf("%0.9lf", a/b);

	return 0;
}