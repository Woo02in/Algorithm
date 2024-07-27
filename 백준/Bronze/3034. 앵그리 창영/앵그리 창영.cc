#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int n;
int main() {
	int N, W, H;
	int cnt = 0;
	scanf("%d %d %d", &N, &W, &H);
	double Max = sqrt(pow(W, 2) + pow(H, 2));
	for (int i = 0; i < N; i++) {
		scanf("%d", &n);
		if (n <= Max) printf("DA\n");
		else printf("NE\n");
	}
	
	return 0;
}