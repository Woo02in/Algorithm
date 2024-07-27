#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int n, cnt = 0;
int main() {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 4; j++) {
			scanf("%d", &n);
			if (n == 1) cnt++;
		}
		if (cnt == 0) printf("D\n");
		else if (cnt == 1) printf("C\n");
		else if (cnt == 2) printf("B\n");
		else if (cnt == 3) printf("A\n");
		else if (cnt == 4) printf("E\n");
		cnt = 0;
	}

	return 0;
}