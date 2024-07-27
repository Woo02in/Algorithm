#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<vector>
using namespace std;


int main() {
	int test;
	scanf("%d", &test);
	for (int i = 0; i < test; i++) {
		int N, M, cnt = 0;
		scanf("%d %d", &N, &M);
		int T = M;
		while (true) {
			if (N == M) {
				printf("%d %d\n", T - cnt , cnt);
				break;
			}
			N -= 2;
			M--;
			cnt++;
			
		}
	}
	return 0;
}