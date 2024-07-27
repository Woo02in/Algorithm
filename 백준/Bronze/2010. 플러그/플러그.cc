#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<algorithm>
#include<vector>

using namespace std;

int main() {
	int tab, ans = 0;
	scanf("%d", &tab);
	for (int i = 0; i < tab; i++) {
		int n;
		scanf("%d", &n);
		ans += n;
	}
	printf("%d", ans - tab + 1);


	return 0;
}