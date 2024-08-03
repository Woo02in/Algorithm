#include<iostream>
#include<algorithm>
#include<cstring>

using namespace std;

int dp[4001][4001];
int main() {
	int answer = 0;
	string s1, s2;
	cin >> s1 >> s2;
	int s1size = s1.size();
	int s2size = s2.size();

	for (int i = 1; i <= s1size; i++) {
		for (int j = 1; j <= s2size; j++) {
			if (s1[i-1] == s2[j-1]) {
				dp[i][j] = dp[i - 1][j - 1] + 1;
				answer = max(answer, dp[i][j]);
			}
		}
	}
	cout << answer << '\n';
	return 0;
}