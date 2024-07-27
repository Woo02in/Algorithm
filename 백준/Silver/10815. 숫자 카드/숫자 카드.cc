#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<algorithm>

using namespace std;
int N, M;
int A[500001];
int B[500001];

int BST(int x) {
	int left = 0, right = N - 1;
	while (left <= right) {
		int mid = (left + right + 1) / 2;
		if (x > A[mid]) {
			left = mid + 1;
		}
		else if (x < A[mid]) {
			right = mid - 1;
		}
		else {
			return 1;
		}
	}
	return 0;
}


int main() {
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &A[i]);
	}
	scanf("%d", &M);
	for (int i = 0; i < M; i++) {
		scanf("%d", &B[i]);
	}
	sort(A, A + N);

	for (int i = 0; i < M; i++) {
		printf("%d ", BST(B[i]));
	}


	return 0;
}