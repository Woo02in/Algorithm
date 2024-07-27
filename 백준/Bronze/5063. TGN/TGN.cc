#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<algorithm>
using namespace std;

int r, e, c;
int main() {
	int test;
	scanf("%d", &test);
	for (int i = 0; i < test; i++) {
		scanf("%d %d %d", &r, &e, &c);
		if (r < e - c) printf("advertise\n");
		else if (r == e - c) printf("does not matter\n");
		else if (r > e - c) printf("do not advertise\n");
	}
	
	return 0;
}