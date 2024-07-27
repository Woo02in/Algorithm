#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<algorithm>

using namespace std;

int arr[10];
int brr[10];
int sum = 0;
int sum_1 = 0;
int main() {
	for (int i = 0; i < 10; i++) {
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < 10; i++) {
		scanf("%d", &brr[i]);
	}
	sort(arr, arr + 10);
	sort(brr, brr + 10);
	for (int i = 9; i >= 7; i--) {
		sum += arr[i];
	}
	for (int i = 9; i >= 7; i--) {
		sum_1 += brr[i];
	}

	printf("%d %d", sum, sum_1);
	return 0;
}