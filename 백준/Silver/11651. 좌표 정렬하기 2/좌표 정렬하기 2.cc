#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<vector>
#include<utility>
#include<algorithm>

using namespace std;

vector<pair<int,int>> v;

bool cmp(pair<int, int>a, pair<int, int>b) {
	if (a.second == b.second) {
		return a.first < b.first;
	}
	else return a.second < b.second;
}

int main() {
	int N;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		int a, b;
		scanf("%d %d", &a, &b);
		v.push_back({ a,b });
	}
	sort(v.begin(), v.end(), cmp);

	for (int i = 0; i < N; i++) {
		printf("%d %d\n", v[i].first, v[i].second);
	}
	return 0;
}