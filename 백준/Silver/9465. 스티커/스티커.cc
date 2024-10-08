#include<iostream>
#include<algorithm>
using namespace std;

int arr[2][100001];
int dp[2][100001];

int main() {
	int test;
	int ans = 0;
	cin >> test;
	for (int q = 0; q < test; q++) {
		int N;
		cin >> N;
		for (int i = 0; i <2; i++) {
			for (int j = 1; j <= N; j++) {
				cin >> arr[i][j];
			}
		}
		dp[0][1] = arr[0][1];
		dp[1][1] = arr[1][1];

		for (int i = 2; i <= N; i++) {
			dp[0][i] = max(dp[1][i - 1], dp[1][i - 2]) + arr[0][i];
			dp[1][i] = max(dp[0][i - 1], dp[0][i - 2]) + arr[1][i];
		}
		
		cout << max(dp[0][N], dp[1][N]) << endl;
	}
	return 0;
}