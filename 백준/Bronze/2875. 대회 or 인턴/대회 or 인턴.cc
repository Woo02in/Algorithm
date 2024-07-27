#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	int N, M, K;
	cin >> N >> M >> K;
	int women = N / 2;	
	int cnt = (N + M - K) / 3;
	int ans = min({ M,women , cnt });
	cout << ans;
	return 0;
}