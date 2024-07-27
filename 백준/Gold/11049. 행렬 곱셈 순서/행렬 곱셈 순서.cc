#define CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<algorithm>
using namespace std;

int arr[501][2]; //입력
int dp[501][501]; // dp를 넣을 2차원 배열

int main() {
	cin.sync_with_stdio(0);
	cin.tie(0);

	int N;
	cin >> N;
	for (int q = 1; q <= N; q++) {
		cin >> arr[q][0] >> arr[q][1];
	}
	for (int j = 1; j < N; j++) {
		dp[j][j + 1] = arr[j][0] * arr[j][1] * arr[j + 1][1];
	}
	for (int i = 2; i <= N; i++) {
		for (int nx = 1; nx + i <= N; nx++) {
			int ny = nx + i;
			dp[nx][ny] = 987654321;
			for (int k = nx; k < ny; k++) { // k는 중간값
				dp[nx][ny] = min(dp[nx][ny], dp[nx][k] + dp[k + 1][ny] + arr[nx][0] * arr[k][1] * arr[ny][1]);
			}
		}
	}
	cout << dp[1][N] << endl;
	return 0;
}