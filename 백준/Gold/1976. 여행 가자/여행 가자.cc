#include<iostream>
#include<vector>
using namespace std;

int root[1001];
int map[201][201];
int find(int node) {
	if (root[node] == node) {
		return node;
	}
	else {
		return root[node] = find(root[node]);
	}
}

int main() {
	int n, m;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) {
		root[i] = i;
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cin >> map[i][j];
			if (map[i][j] == 1) // 연결되야하는거지?
			{
				root[find(i)] = find(j); // union
			}
		}
	}
	int path[1001];
	for (int i = 0; i < m; i++) {
		cin >> path[i];
	}
	for (int i = 0; i < m - 1; i++) {
		if (find(path[i]) != find(path[i + 1])) {
			cout << "NO" << endl;
			return 0;
		}
	}
	cout << "YES" << endl;
	return 0;
}