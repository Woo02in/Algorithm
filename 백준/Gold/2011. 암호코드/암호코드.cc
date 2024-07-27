#include<iostream>
#include<algorithm>
#include<string>

using namespace std;
string s;
int dp[5001];

int solution(string code, int n) {
	if (code[0] == '0') return 0;
	dp[0] = dp[1] = 1;

	for (int i = 2; i <= n; i++) {
		if (code[i - 1] != '0') dp[i] = dp[i - 1] % 1000000;

		int tmp = (code[i - 2] - '0') * 10 + (code[i - 1] - '0');
		if (tmp >= 10 && tmp <= 26)
			dp[i] = (dp[i] + dp[i - 2]) % 1000000;
	}
	return dp[n];
}
int main() {
	cin >> s;
	int answer = solution(s, s.size());
	cout << answer;

	return 0;
}
