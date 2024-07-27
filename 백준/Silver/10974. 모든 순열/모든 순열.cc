#include<iostream>
#include<algorithm>
#include<cstring>
#include<vector>
using namespace std;
int N;
int vis[9];
vector<int> answer;
void backtracking(int x, int y) {
	if (x == y) {
		for (int i = 0; i < N; i++) {
			cout << answer[i] << " ";
		}
		cout << '\n';
		return;
	}
	for (int i = 0; i < N; i++) {
		if (vis[i]) continue;
		vis[i] = 1;
		answer.push_back(i + 1);
		backtracking(N, y + 1);
		answer.pop_back();
		vis[i] = 0;
	}
}
int main() {
	cin >> N;
	backtracking(N, 0);
	return 0;
}