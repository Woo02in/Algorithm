#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#include<utility>

using namespace std;
int N, dp[1001], answer;
priority_queue<pair<int,int>> pq;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	int max_date = 0;
	cin >> N;
	for (int i = 0; i < N; i++) {
		int d, w;
		cin >> d >> w;
		max_date = max(max_date, d);
		pq.push({ w,d });
	}

	for (int i = 0; i < N; i++) {
		for (int j = pq.top().second; j > 0; j--) {
			if (dp[j] == 0) {
				dp[j] = pq.top().first;
				break;
			}
		}
		pq.pop();
	}

	for (int i = 1; i <= max_date; i++) {
		answer += dp[i];
	}
	cout << answer << '\n';
	/*while (!pq.empty()) {
		cout << pq.top().second<<" ";
		pq.pop();
	}*/
	return 0;
}