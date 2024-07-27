#include<iostream>
#include<algorithm>
#include<queue>
#include<vector>
#include<utility>
constexpr auto MAX = 9999999;

using namespace std;

int N, D, current;

int main() {
	cin >> N >> D;
	vector<pair<int, int>> v[10001];
	vector<int> answer(D+1,MAX);
	int a, b, c;
	for (int i = 0; i < N; i++) {
		cin >> a >> b >> c;
		v[b].push_back({ a,c });
	}
	answer[0] = 0;
	for (int i = 1; i <= D; i++) {
		if (v[i].size() == 0) {
			answer[i] = answer[i - 1] + 1;
		}
		else {
			for (int j = 0; j < v[i].size(); j++) {
				answer[i] = min(answer[i], min(answer[i - 1] + 1, answer[v[i][j].first] + v[i][j].second));
			}
		}
	}
	cout << answer[D] << '\n';
	return 0;
}