#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int Sugar;
	int cnt = 0;

	scanf("%d", &Sugar);

	while (Sugar > 0) {
		if (Sugar % 5 == 0) {
			Sugar -= 5;
			cnt++;
		}
		else if (Sugar % 3 == 0) {
			Sugar -= 3;
			cnt++;
		}
		else if (Sugar > 5) {
			Sugar -= 5;
			cnt++;
		}
		else {
			cnt = -1;
			break;
		}

	}
	printf("%d", cnt);

	return 0;
}