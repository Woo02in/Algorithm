#include<iostream>
#include<algorithm>
#include<vector>
typedef long long ll;

using namespace std;

ll T;
ll N, M;

int main() {
	cin >> T;
	while (T--) {
		ll answer = 0;
		ll dp[10001] = { 0, };
		cin >> N;
		vector<ll> coin(N+1);
		
		for (int i = 0; i < N; i++) {			
			cin >> coin[i];
		}
		cin >> M;
		dp[0] = 1;
		for (int i = 0; i < N; i++) {
			for (int j = coin[i]; j <= M; j++) {
				dp[j] += dp[j - coin[i]];
			}
		}
		cout << dp[M] << '\n';
	}


	return 0;
}