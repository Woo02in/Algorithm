#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<algorithm>

using namespace std;
int n;
int arr[10001];
int main() {
	int t;
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		scanf("%d", &n);
		arr[n]++;
	}
	for (int i = 1; i <= 10000; ++i) {
		for (int j = 0; j < arr[i]; ++j) {
			printf("%d\n", i);
		}
	}
	return 0;
}