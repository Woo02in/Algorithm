#include<iostream>
#include<vector>
#include<algorithm>


using namespace std;

int root[1001];

bool cmp(vector<int> a, vector<int> b) {
	return a[2] < b[2];
}

int find(int a) {
	if (root[a] == a) {
		return root[a];
	}
	else {
		return root[a] = find(root[a]);
	}
}

int main() {
	int N, M;
	long long ans = 0;
	cin >> N >> M;
	vector<vector<int>> com(M,vector<int>(3));
	for (int i = 0; i < M; i++) {
		cin >> com[i][0] >> com[i][1] >> com[i][2];
	}
	for (int i = 1; i <= N; i++) {
		root[i] = i;
	}
	sort(com.begin(), com.end(), cmp);

	for (int i = 0; i < M; i++) {
		int start = find(com[i][0]);
		int end = find(com[i][1]);
		int cost = com[i][2];

		if (start != end) {
			root[start] = end;
			ans += cost;
		}
	}
	cout << ans << endl;
	return 0;
}