#include<iostream>
#include<queue>

using namespace std;

int N, K;
int vis[100001];

int bfs() {
    queue<int> q;
	q.push(N);
	vis[N] = 0;
	
	while (!q.empty()) {
		int cur = q.front();
		q.pop();
		if (cur == K) return vis[K];

		if (cur + 1 < 100001 && vis[cur + 1] > vis[cur] + 1) {
			vis[cur + 1] = vis[cur] + 1;
			q.push(cur + 1);
		}
		if (cur - 1 >= 0 && vis[cur - 1] > vis[cur] + 1) {
			vis[cur - 1] = vis[cur] + 1;
			q.push(cur - 1);
		}
		if (cur * 2 < 100001 && vis[cur * 2] > vis[cur]) {
			vis[cur * 2] = vis[cur];
			q.push(cur * 2);
		}
	}
}
int main() {
	
	cin >> N >> K;
	for (int i = 0; i < 100001; i++) {
		vis[i] = 9999999;
	}
	int answer = bfs();
	
	cout << answer<<endl;

	return 0;
}