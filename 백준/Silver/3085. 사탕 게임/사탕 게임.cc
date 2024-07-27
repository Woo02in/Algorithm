#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
int N,answer;
char arr[51][51];

void check() {
	char c;
	for (int i = 0; i < N; i++) {
		int count = 1;
		c = arr[i][0];
		for (int j = 1; j < N; j++) {
			if (arr[i][j] == c) count += 1;
			else count = 1;
			c = arr[i][j];
			answer = max(answer, count);
		}
	}
	for (int i = 0; i < N; i++) {
		int count = 1;
		c = arr[0][i];
		for (int j = 1; j < N; j++) {
			if (arr[j][i] == c) count += 1;
			else count = 1;
			c = arr[j][i];
			answer = max(answer, count);
		}
	}
}
int main() {
	cin >> N;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> arr[i][j];
		}
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N - 1; j++) {
			swap(arr[i][j], arr[i][j + 1]);
			check();
			swap(arr[i][j], arr[i][j + 1]);
		}
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N - 1; j++) {
			swap(arr[j][i], arr[j+1][i]);
			check();
			swap(arr[j][i], arr[j+1][i]);
		}
	}
	cout << answer;
	return 0;
}