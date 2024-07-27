#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
int square[51][51] = { 0, };
int N, M;
int search(int arr[51][51], int a, int b) {
	int idx = arr[a][b];
	int ans = 1;
	for (int i = b+1; i<M; i++) {
		if (arr[a][i] == idx) {
			if (arr[a + i - b][b] == idx && arr[a + i - b][i] == idx&& (a + i - b) <N) {
				ans = max(ans, ((i - b + 1) * (i - b + 1)));
			}
		}					
	}
	return ans;
}

int main() {
	
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			scanf("%1d", &square[i][j]);
		}
	}
	int answer = 1;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			answer = max(answer,search(square, i, j));
		}
	}
	cout << answer<<endl;
	/*for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cout << square[i][j] << " ";
		}
		cout << endl;
	}*/
	return 0;
}