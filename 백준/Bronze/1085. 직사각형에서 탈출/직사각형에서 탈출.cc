#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int Short(int x, int y) {
	return x > y ? y : x;
}

int main() {
	int x, y, w, h, x_1, y_1, answer;
	int short_x, short_y;
	scanf("%d %d %d %d", &x, &y, &w, &h);
	x_1 = Short(x, w - x);
	y_1 = Short(y, h - y);
	answer = Short(x_1, y_1);
	printf("%d", answer);

	return 0;
}