#include<iostream>
#include<algorithm>
#include<math.h>

using namespace std;

int card[10001];
int DP[10001];
int main() {
	cin.sync_with_stdio(0);
	cin.tie(0);

	int N;
	cin >> N;
	for (int i = 1; i <= N; i++) {
		cin >> card[i];
	}
	DP[0] = card[0] = 0;

	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= i; j++) {
			DP[i] = max(DP[i], DP[i - j] + card[j]);
		}
	}

	cout << DP[N];
	return 0;
}