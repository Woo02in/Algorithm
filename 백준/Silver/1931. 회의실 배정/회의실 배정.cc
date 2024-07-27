#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<algorithm>
#include<utility>
#include<vector>
using namespace std;


int N;
vector<pair<int, int>> v;
bool cmp(pair<int, int> a, pair<int, int> b) {
	if (a.second == b.second) {
		return a.first < b.first;
	}
	return a.second < b.second;
}

int main() {
	scanf("%d", &N);
	int start, end;
	for (int i = 0; i < N; i++) {
		scanf("%d %d", &start, &end);
		v.push_back({ start,end });
	}

	sort(v.begin(), v.end(),cmp);

	int time = 0, cnt = 0;
	for (int i = 0; i < N; i++) {
		if (time <= v[i].first) {
			time = v[i].second;
			cnt++;
		}	
	}
	printf("%d", cnt);
	return 0;
}