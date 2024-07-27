#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<vector>
using namespace std;


int main() {
	int A, B, C;
	scanf("%d %d %d", &A, &B, &C);
	if (C - B > B - A) {
		printf("%d", C - B - 1);
	}
	else printf("%d", B - A - 1);
		
	
	return 0;
}