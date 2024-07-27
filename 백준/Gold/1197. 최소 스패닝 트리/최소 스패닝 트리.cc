#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;


int root[10001];

bool cmp(vector<int> a, vector<int> b) {
	return a[2] < b[2];
}

int find(int node) {
	if (node == root[node]) // 내가 최상위다
		return node;
	else
		return root[node] = find(root[node]);
}

int main() {
	int V, E;
	long long answer = 0;
	cin >> V >> E;
	vector<vector<int>> tree(E, vector<int>(3, 0));
	
	for (int i = 0; i < E; i++) {
		cin >> tree[i][0] >> tree[i][1] >> tree[i][2];
	}
	for (int i = 1; i <= V; i++) {
		root[i] = i;
	}
	sort(tree.begin(), tree.end(), cmp);
	
	for (int i = 0; i < E; i++) {
		int start_parent = find(tree[i][0]);
		int end_parent = find(tree[i][1]);
		int cost = tree[i][2];

		if (start_parent != end_parent) {
			root[start_parent] = end_parent;
			answer += cost;
		}
	}

	cout << answer << endl;


	return 0;
}