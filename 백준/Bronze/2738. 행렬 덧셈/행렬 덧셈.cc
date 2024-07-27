#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	int N = 0, M = 0;
	int arr[100][100] = {0,};
	int crr[100][100] = { 0, };
	int ans[100][100] = { 0, };
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> arr[i][j];
		}
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> crr[i][j];
		}
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			ans[i][j] = arr[i][j] + crr[i][j];
		}
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cout << ans[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}