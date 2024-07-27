#include<iostream>

using namespace std;

int root[1000001]; // 부모가 누군인지 적어놓는 배열

int find(int node) {
	if (root[node] == node) {
		return node;
	}
	else {
		return root[node] = find(root[node]);
	}
}

int main() {
	cin.sync_with_stdio(0);
	cin.tie(0);
	int n, m;
	cin >> n >> m;

	for (int i = 0; i <= n; i++) {
		root[i] = i;
	}

	int flag, a, b;
	for (int i = 0; i < m; i++) {
		cin >> flag >> a >> b;
		if (flag == 1) {
			a = find(a);
			b = find(b);
			if (a == b) {
				cout << "YES" << "\n";
			}
			else {
				cout << "NO" << "\n";
			}
		}
		else {
			a = find(a);
			b = find(b);
			if (a != b) {
				root[a] = b;
			}
		}
	}
	

	return 0;
}