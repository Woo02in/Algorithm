#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int fac(int a) {
	if (a < 1) return 1;
	else return a * fac(a - 1);
}
int main() {
	int n, m;
	scanf("%d %d", &n, &m);	
	printf("%d", fac(n)/ (fac(m)*fac(n-m)));
	return 0;
}