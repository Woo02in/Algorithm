#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int  N = 1, input, count = 1, sum = 0;
	scanf("%d", &input);
	
	while (true) {
		sum += 6;
		N += sum;
		count++;
		if (N - sum <= input && input <= N) {
			break;
		}
	}
	if (input == 1) {
		printf("1");
	}
	else printf("%d", count);
	return 0;
}