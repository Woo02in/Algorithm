#include<iostream>
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
	cin >> N;
	int start, end;
	for (int i = 0; i < N; i++) {
		cin >> start >> end;
		v.push_back({ start,end });
	}

	sort(v.begin(), v.end(), cmp);

	int time = 0, cnt = 0;
	for (int i = 0; i < N; i++) {
		if (time <= v[i].first) {
			time = v[i].second;
			cnt++;
		}
	}
	cout << cnt << '\n';
	return 0;
}