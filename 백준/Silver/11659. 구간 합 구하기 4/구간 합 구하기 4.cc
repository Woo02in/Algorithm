#include<iostream>
#include<algorithm>

using namespace std;
int N, M, a, b;
int num[100001];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> N >> M;
	for (int i = 1; i <= N; i++) {
		cin >> num[i];
		num[i] += num[i - 1];
	}
	for (int i = 0; i < M; i++) {		
		cin >> a >> b;
		cout << num[b] - num[a - 1] << '\n';
	}

	return 0;
}