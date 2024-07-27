#include<iostream>

using namespace std;

int arr[301][301];
int dp[301][301];
int main() {
	int N, M;
	cin >> N >> M;
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= M; j++) {
			cin >> arr[i][j];
			dp[i][j] = dp[i - 1][j] + dp[i][j - 1] + arr[i][j] - dp[i-1][j-1];
		}
	}
	int K, x, y, a, b;
	cin >> K;
	for (int i = 0; i < K; i++) {
		cin >> x >> y >> a >> b;
		cout << dp[a][b] - dp[x - 1][b] - dp[a][y - 1] + dp[x - 1][y - 1] << endl;
	}
	


	return 0;
}