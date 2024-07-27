#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int A, B, C, D, a, b, c, d;
int HP, MP, att, she;
int main() {
	int test;
	scanf("%d", &test);
	for (int i = 0; i < test; i++) {
		scanf("%d %d %d %d %d %d %d %d", &A, &B, &C, &D, &a, &b, &c, &d);
		HP = A + a;
		MP = B + b;
		att = C + c;
		she = D + d;
		if (HP < 1) HP = 1;
		if (MP < 1) MP = 1;
		if (att < 0) att = 0;
		printf("%d\n", HP + 5 * MP + 2 * att + 2 * she);
	}

	return 0;
}