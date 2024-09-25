#include<iostream>
#include<algorithm>
#define MAX 987654321;

using namespace std;
int P;
int dp[51][1001];

int main() {
	cin >> P;
	for (int i = 1; i <= 50; i++) {
		for (int j = 1; j <= 1000; j++) {
			if (i == 1) dp[i][j] = j;
			else dp[i][j] = MAX;
		}
	}

	for (int i = 2; i <= 50; i++) {		
		for (int j = 1; j <= 1000; j++) {
			if (i > j) {
				dp[i][j] = dp[i-1][j];
				continue;
			}
			for (int k = 1; k <= j; k++) {				
				dp[i][j] = min(dp[i][j], max(dp[i-1][k - 1], dp[i][j-k]) + 1);
			}
		}
	}
	/*for (int j = 1; j <= 1000; j++) {
		cout << dp[2][j] << " ";		
	}*/
	
	while (P--) {
		int B, M;
		cin >> B >> M;
		cout << dp[B][M] << '\n';
	}


	return 0;
}