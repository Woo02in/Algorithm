#include<iostream>

using namespace std;

int main() {
	int dp[10] = { 0, }, A;
	for (int i = 1; i < 10; i++) {
		dp[i] = dp[i - 1] + i;
	}
	cin >> A;
	cout << dp[A - 1]<<endl;
	return 0;
}