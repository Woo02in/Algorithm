#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>

using namespace std;
int N;
int a, b;
int road[10001];
int vis[10001];
int answer[10001];

void bfs(int start, int end) {
	queue<int> q;
	q.push(start);
	vis[start] = 1;
	while (!q.empty()) {
		int cur = q.front();
		q.pop();
		if (cur == b) {
			return;
		}
		for (int i = cur + road[cur]; i <= N; i += road[cur]) {
			if (!vis[i]) {
				answer[i] = answer[cur] + 1;
				q.push(i);
				vis[i] = 1;
			}
		}
		for (int i = cur - road[cur]; i >= 1; i -= road[cur]) {
			if (!vis[i]) {
				answer[i] = answer[cur] + 1;
				q.push(i);
				vis[i] = 1;
			}
		}
	}
	
}
int main() {
	cin >> N;
	for (int i = 1; i <= N; i++) {
		cin >> road[i];
	}
	cin >> a >> b;
	if (a == b) {
		cout << "0"<< '\n';
		return 0;
	}
	bfs(a,b);
	if (answer[b] == 0) {
		cout << -1 << '\n';

	}
	else cout << answer[b] << '\n';
	return 0;
}