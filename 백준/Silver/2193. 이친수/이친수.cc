#include<iostream>

using namespace std;
long long DP[91];
int main() {
	int N;
	cin >> N;
	DP[1] = 1;
	DP[2] = 1;
	for (int i = 3; i <= N; i++) {
		DP[i] = DP[i - 2] + DP[i - 1];
	}
	cout << DP[N];
	return 0;
}