// 3733 
//#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdio.h>
using namespace std;
int N, S;
int main() {
	while ((scanf("%d %d", &N, &S)) != EOF){
		printf("%d\n", S / (N + 1));
	}
	return 0;
}