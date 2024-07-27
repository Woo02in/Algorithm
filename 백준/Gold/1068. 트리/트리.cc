#include<iostream>
#include<vector>

using namespace std;

int N, K, leaf, root;
vector<int> tree[51];

int DFS(int node) {
	if (node == K) 
		return -1;
	if (!tree[node].size()) {
		leaf++;
		return 0;
	}
	for (int i = 0; i < tree[node].size(); i++) {
		int tmp = DFS(tree[node][i]);
		if (tmp == -1 && tree[node].size() == 1) {
			leaf++;			
		}	
	}
	return 0;
}

int main() {
	cin >> N;
	int n = 0;
	for (int i = 0; i < N; i++) {
		cin >> n;
		if (n == -1) {
			root = i;
		}
		else {
			tree[n].push_back(i);
		}
	}
	cin >> K;
	DFS(root);
	cout << leaf << endl;
	return 0;
}