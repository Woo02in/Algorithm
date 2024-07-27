#include<iostream>
#include<algorithm>
#include<cmath>

using namespace std;
int n, m;
int root[500001];

int find(int node) {
	if (root[node] == node) {
		return node;
	}
	else {
		return root[node] = find(root[node]);
	}
}
int main() {	
	int a, b, answer = 0;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		root[i] = i;
	}
	int s, e;
	for (int i = 0; i < m; i++) {		
		cin >> s >> e;		
		s = find(s);
		e = find(e);
		if (s == e) {
			answer = i + 1;
			break;
		}
		else {
			root[s] = e;
		}
	}
	cout << answer << endl;
	return 0;
}