#include<iostream>
#include<algorithm>
typedef long long ll;

using namespace std;

int N;
ll dp[101][21];
int num[101];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> N;
	for (int i = 1; i < N; i++) {
		cin >> num[i];
	}
	int K;
	cin >> K;
	int cur = num[1];
	dp[1][num[1]] = 1;
	for (int i = 2; i < N; i++) {		
		for (int j = 0; j < 21; j++) {
			if (j - num[i] >= 0) dp[i][j - num[i]] += dp[i - 1][j];
			if (j + num[i] <= 20) dp[i][j + num[i]] += dp[i - 1][j];
		}
	}
	/*for (int i = 1; i <= N; i++) {
		for (int j = 0; j < 21; j++) {
			cout << dp[i][j] << " ";
		}
		cout << endl;
	}*/
	cout << dp[N - 1][K] << '\n';
	return 0;
}