#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<iostream>
#include<string>
#include<algorithm>

using namespace std;
int DP[1001][1001];
int main() {
	string s_1;
	string s_2;
	cin >> s_1 >> s_2;
	for (int i = 1; i <= s_1.size(); i++) {
		for (int j = 1; j <= s_2.size(); j++) {
			if (s_1[i-1] == s_2[j-1]) {
				DP[i][j] = DP[i-1][j - 1] + 1;
			}
			else {
				DP[i][j] = max(DP[i - 1][j], DP[i][j - 1]);
			}
		}
	}
	cout << DP[s_1.size()][s_2.size()];
	return 0;
}