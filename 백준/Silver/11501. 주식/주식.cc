#include<iostream>
#include<algorithm>
#include<vector>
typedef long long ll;
using namespace std;
int T;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin >> T;
	while (T--) {
		ll N, answer = 0;
		cin >> N;
		vector<ll> cost;
		//ll cost[1000001] ={0,};
		for (int i = 0; i < N; i++) {
			int x;
			cin >> x;
			cost.push_back(x);
		}
		int Max = -1;
		for (int i = N - 1; i >= 0; i--) {
			if (cost[i] > Max) Max = cost[i];
			else {
				answer += Max - cost[i];
			}
		}
		
		cout << answer << '\n';
		cost.clear();
	}

	return 0;
}