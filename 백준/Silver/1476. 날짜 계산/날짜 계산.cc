#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

int main() {
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	int A = 1, B = 1, C = 1, cnt =1;
	while (A != a || B != b || C != c) {
		if (A > 15) {
			A = 1;
		}
		if (B > 28) {
			B = 1;
		}
		if (C > 19) {
			C = 1;
		}
		if (A == a && B == b && C == c) {
			break;
		}
		A++;
		B++;
		C++;
		cnt++;
	}
	printf("%d", cnt);

	return 0;
}