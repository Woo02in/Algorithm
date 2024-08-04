#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#include<utility>

using namespace std;
int N, M;
priority_queue<int, vector<int>, greater<int>> pq;
int arr[32001];
vector<int> problem[32001];
int main() {
	cin >> N >> M;
	for (int i = 0; i < M; i++) {
		int a, b;
		cin >> a >> b;
		problem[a].push_back(b);
		arr[b]++;
	}
	for (int i = 1; i <= N; i++) {
		if (arr[i] == 0) pq.push(i);
	}
	while (!pq.empty()) {
		int current = pq.top();
		pq.pop();
		cout << current << " ";
		for (int i = 0; i < problem[current].size(); i++) {
			int next = problem[current][i];
			arr[next]--;
			if (arr[next] == 0) pq.push(next);
		}
	}
	cout << '\n';
	return 0;
}