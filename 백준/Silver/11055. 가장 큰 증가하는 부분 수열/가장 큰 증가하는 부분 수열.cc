#include<iostream>
#include<algorithm>

using namespace std;
int arr[1001];
int dp[1001];

int main() {
	int N, ans= 0;
	cin >> N;
	for (int i = 1; i <= N; i++) {
		cin >> arr[i];
	}
	for (int i = 1; i <= N; i++) {
		int sum = 0;
		for (int j = 1; j < i; j++) {
			if (arr[i] > arr[j] && sum <dp[j]) {
				sum = dp[j];
			}
		}
		dp[i] = sum + arr[i];
		if (ans < dp[i]) {
			ans = dp[i];
		}
	}
	cout << ans;

	return 0;
}