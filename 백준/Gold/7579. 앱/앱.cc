#include<iostream>
#include<algorithm>

using namespace std;

int N, K;
int byte[101];
int value[101];
int dp[101][10001];
int sum;
int main() {
	cin.sync_with_stdio(0);
	cin.tie(0);

	cin >> N >> K;
	int ans = 10001;
	for (int i = 1; i <= N; i++) {
		cin >> byte[i];
	}
	for (int i = 1; i <= N; i++) {
		cin >> value[i];
        sum+= value[i];
	}
	//dp[1][value[1]] = byte[1];

	for (int i = 1; i <= N; i++) {
		for (int j = 0; j <= sum; j++) {
			if (j >= value[i]) {
				dp[i][j] = max(dp[i][j], dp[i - 1][j - value[i]] + byte[i]);
			}
			dp[i][j] = max(dp[i][j], dp[i - 1][j]);			
		}
	}
    for(int i =0;i<= sum; i++){
        if(dp[N][i] >= K){
            cout << i<<endl;
	        break;
        }
                    
    }
	return 0;
}