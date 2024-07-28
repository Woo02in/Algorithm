#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include<utility>

using namespace std;

int N, answer;
vector<pair<int, int>> v;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> N;
	for (int i = 0; i < N; i++) {
		int s, e;
		cin >> s >> e;
		v.push_back({ s,e });
	}
	sort(v.begin(), v.end());
	int start = v[0].first;
	int end = v[0].second;
	for (int i = 1; i < v.size(); i++) {
		if (v[i].first > end) {
			//cout << start << " " << end << endl;
			answer += end - start;
			start = v[i].first;
			end = v[i].second;
		}		
		if (end >= v[i].first) {
			end = max(end,v[i].second);
		}
	}
	answer += end - start;
	cout << answer << '\n';
	return 0;
}