#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

using namespace std;

int main() {
	int N, N_1, count = 0;
	scanf("%d", &N);
	N_1 = 10 * (N % 10) +( N/10 + N % 10)%10;
	count++;
	while (N_1 != N) {
		N_1 = 10 * (N_1 % 10) + (N_1 / 10 + N_1 % 10) % 10;
		count++;
	}
	
	printf("%d", count);


	return 0;
}