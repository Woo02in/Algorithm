#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<algorithm>
using namespace std;
int arr[30];
int n;
int main() {
	for (int i = 0; i < 28; i++) {
		scanf("%d", &n);
		arr[n] = 1;
	}
	for (int i = 1; i <= 30; i++) {
		if(arr[i] == 0) printf("%d\n", i);
		
	}
	return 0;
}