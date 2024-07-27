#include<stdio.h>

int main() {
	int arr[42] = { 0, };
	int count = 0;
	for (int i = 0; i < 10; i++) {
		int N;
		scanf("%d", &N);
		if (arr[N % 42] == 0) {
			arr[N % 42]++;
			count++;
		}
		else {
			continue;
		}
	
	}
	printf("%d", count);

	return 0;
}