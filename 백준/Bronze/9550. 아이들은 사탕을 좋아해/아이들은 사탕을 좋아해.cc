#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
using namespace std;

int main() {
	int Test;
	scanf("%d", &Test);
	for (int i = 0; i < Test; i++) {
		int N, K, cnt = 0;
		scanf("%d %d", &N, &K);
		for (int j = 0; j < N; j++) {
			int a; 
			scanf("%d", &a);
			cnt = cnt + (a / K);
		}
		printf("%d\n", cnt);
	}
		
	
	return 0;
}