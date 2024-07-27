#include<stdio.h>

int main() {
	int X_1, X_2, X_3, Y_1, Y_2, Y_3;
	scanf("%d %d", &X_1, &Y_1);
	scanf("%d %d", &X_2, &Y_2);
	scanf("%d %d", &X_3, &Y_3);
	if (X_1 == X_2) {
		printf("%d ", X_3);
	}
	else if (X_1 == X_3) {
		printf("%d ", X_2);
	}
	else if (X_2 == X_3) {
		printf("%d ", X_1);
	}
	if (Y_1 == Y_2) {
		printf("%d", Y_3);
	}
	else if (Y_1 == Y_3) {
		printf("%d", Y_2);
	}
	else if (Y_3 == Y_2) {
		printf("%d", Y_1);
	}
	return 0;
}