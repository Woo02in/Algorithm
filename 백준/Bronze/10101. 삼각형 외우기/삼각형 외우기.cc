#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int sum = 0;
	int a, b, c;
	bool flag = false;
	scanf("%d %d %d", &a, &b, &c);
	if (a + b + c == 180) {
		flag = true;
	}
	if (flag) {
		if (a == 60 && b == 60 && c == 60) {
			printf("Equilateral");
		}
		else if (a == b || a == c || b == c) {
			printf("Isosceles");
		}
		else printf("Scalene");
	}
	else printf("Error");
	return 0;
}