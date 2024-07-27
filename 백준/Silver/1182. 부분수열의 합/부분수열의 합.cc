#include<iostream>

using namespace std;

int N, M, arr[21], ans = 0;

void dfs(int idx, int sum) {
	if (idx == N) {
		return;
	}
	if (sum + arr[idx] == M) {
		ans++;
	}
	dfs(idx + 1, sum);
	dfs(idx + 1, sum + arr[idx]);

}

int main() {
	
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	dfs(0, 0);
	cout << ans;

	return 0;
}