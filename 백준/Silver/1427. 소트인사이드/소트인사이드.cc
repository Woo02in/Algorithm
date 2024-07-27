#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<algorithm>
#include<string.h>
using namespace std;

char s[11];

bool cmp(char a, char b) {
	return a > b;
}

int main() {
	scanf("%s", s);
	sort(s, s+strlen(s), cmp);
	printf("%s", s);

	return 0;
}