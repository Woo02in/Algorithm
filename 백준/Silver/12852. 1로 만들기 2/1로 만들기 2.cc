#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
int dp[1000001];
int main() {
	int N, cnt = 0;
	cin >> N;
	dp[2] = 1;
	
	vector<int> v;
	//v.push_back(1);
	for (int i = 2; i <= N; i++) {
		if (i % 3 == 0 && i % 2 == 0) {
			dp[i] = min(dp[i / 3] + 1, dp[i / 2] + 1);
		}
		else if (i % 3 == 0 && i % 2 != 0) {
			dp[i] = min(dp[i / 3] + 1, dp[i - 1] + 1);
		}
		else if (i % 2 == 0 && i % 3 != 0) {
			dp[i] = min(dp[i / 2] + 1, dp[i - 1] + 1);
		}
		else {			
			dp[i] = dp[i - 1] + 1;
		}
	}
	cout << dp[N] << '\n';
	v.push_back(N);
	while (N != 1) {
		if (N % 3 == 0 && N % 2 == 0) {
			if (dp[N / 3] < dp[N / 2]) {
				v.push_back(N / 3);
				N /= 3;
			}
			else {
				v.push_back(N / 2);
				N /= 2;
			}
		}
		else if (N % 3 == 0 && N % 2 != 0) {
			if (dp[N / 3] < dp[N - 1]) {
				v.push_back(N / 3);
				N /= 3;
			}
			else {
				v.push_back(N - 1);
				N -= 1;
			}
		}
		else if (N % 2 == 0 && N % 3 != 0) {
			if (dp[N / 2] < dp[N - 1]) {
				v.push_back(N / 2);
				N /= 2;
			}
			else {
				v.push_back(N - 1);
				N -= 1;
			}
		}
		else {
			v.push_back(N - 1);
			N -= 1;
		}
	}
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}
	
	return 0;
}