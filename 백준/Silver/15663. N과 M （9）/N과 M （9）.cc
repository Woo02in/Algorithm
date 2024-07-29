#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int N, M;
int vis[10001];
int arr[10001];
vector<int> answer;
void dfs(int s, int count) {
	int last = -1;
	if (count == M) {
		
		for (int i = 0; i < M; i++) {
			cout << answer[i] << " ";
		}
		cout << '\n';
		return;
	}
	for (int i = 0; i < N; i++) {
		
		if (!vis[i]) {
			if (last == arr[i]) continue;
			vis[i] = 1;			
			answer.push_back(arr[i]);			
			last = answer[count];
			dfs(0, count + 1);					
			answer.pop_back();
			vis[i] = 0;
		}
	}
}

int main() {
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + N);
	dfs(0, 0);

	return 0;
}