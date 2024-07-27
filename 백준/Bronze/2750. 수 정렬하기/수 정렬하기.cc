#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<algorithm>
#include<vector>

using namespace std;
int n;
vector<int> v;
int main() {
	int t;
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		scanf("%d", &n);
		v.push_back(n);
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < t; i++) {
		printf("%d\n", v[i]);
	}
	return 0;
}