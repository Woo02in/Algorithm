#include<iostream>
#include<algorithm>
#include<vector>
#include <cstring>

using namespace std;

const int MAX = 50;

int N, input[MAX], arr[MAX], arr2[MAX], result[MAX], P[MAX], S[MAX];

bool check() {
	int p_num = 0;
	for (int i = 0; i < N; i++) {
		if (i % 3 == 0) p_num = 0;
		result[arr[i]] = p_num++;
	}

	for (int i = 0; i < N; i++) {
		if (result[i] != P[i]) return false;
	}
	return true;
}

void mix() {
	for (int i = 0; i < N; i++) {
		arr2[S[i]] = arr[i];
	}

	for (int i = 0; i < N; i++) arr[i] = arr2[i];
	memset(arr2, 0, sizeof(arr2));
}

bool check_input() {
	for (int i = 0; i < N; i++) {
		if (arr[i] != input[i]) return false;
	}
	return true;
}

int main() {
	cin >> N;

	for (int i = 0; i < N; i++) {
		input[i] = i;
		arr[i] = i;
	}
	for (int i = 0; i < N; i++) {
		cin >> P[i];
	}
	for (int i = 0; i < N; i++) {
		cin >> S[i];
	}
		

	int answer = 0;
	bool flag = true;
	while (true) {
		if (check()) break;

		if (answer > 0 && check_input()) {
			flag = false;
			break;
		}
		mix();
		answer++;
	}

	if (!flag) {
		cout << -1 << '\n';
	}
	else cout << answer<<'\n';

	return 0;
}