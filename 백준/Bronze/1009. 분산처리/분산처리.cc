#include<stdio.h>

int main() {
	int Test;
	scanf("%d", &Test);
	for (int i = 0; i < Test; i++) {
		int a, b;
		scanf("%d %d", &a, &b);
		int answer = 1;
		for (int j = 1; j <= b; j++) {
			answer = (answer *a) % 10;
		}
		if (answer == 0) {
			printf("10\n");
		}
		else printf("%d\n", answer);
	}
	return 0;
}