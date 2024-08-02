#include<iostream>
#include<algorithm>
#include<vector>
typedef long long ll;

using namespace std;

ll N, M;


ll chair[41];
ll dp[41];
vector<int> v;
int main() {
	ll answer = 1;
	cin >> N >> M;
	dp[0] = 1;
	dp[1] = 1;
	dp[2] = 2;
	
	for (int i = 0; i < M; i++) {
		int x;
		cin >> x;
		v.push_back(x);
	}
	sort(v.begin(), v.end());
	int cnt = 0;
	for (int i = 3; i <= N; i++) {		
		dp[i] = dp[i - 2] + dp[i - 1];
	}
	int count = 0;
	for (int i = 1; i <= N; i++) {
		count++;
		if (cnt < M) {
			if (i == v[cnt]) {
				answer *= dp[count - 1];				
				cnt++;
				count = 0;
			}
		}
		else if (i == N) {			
			answer *= dp[count];
		}
	}
	cout << answer << '\n';
	return 0;
}
