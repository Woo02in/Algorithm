#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
using namespace std;

int main() {
	int T;
	scanf("%d", &T);
	printf("%d", T*(T - 1)*(T - 2)*(T - 3) / 24);
		
	
	return 0;
}