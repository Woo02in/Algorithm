#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>

using namespace std;
int N, M;
int depth[100001];
vector<int> node[100001];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N >> M;
	for (int i = 0; i < M; i++) {
		int a, b;
		cin >> a >> b;
		node[a].push_back(b);
		depth[b]++;
	}
	queue<int> q;
	for (int i = 1; i <= N; i++) {
		if (depth[i] == 0) q.push(i);
	}
	while (!q.empty()) {
		int current = q.front(); 
		q.pop(); 
		cout << current << " ";
		for (int i = 0; i < node[current].size(); i++) {
			int next = node[current][i];
			depth[next]--;
			if (depth[next] == 0) q.push(next);
		}
	}
	cout << '\n';
	return 0;
}