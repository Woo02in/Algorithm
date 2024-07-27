#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<algorithm>
#include<vector>
using namespace std;
int n;
vector<int> v;

int main() {
	int N, sum = 0, s = 0;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &n);
		v.push_back(n);
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < N; i++) {
		s += v[i];
		sum += s;
	}
	printf("%d", sum);
	return 0;
}