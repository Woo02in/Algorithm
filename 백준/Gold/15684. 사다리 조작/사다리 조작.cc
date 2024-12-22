#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>

using namespace std;

int N, M, H;
int ladder[31][11];
int answer = 987654321;

bool check() {
	for (int i = 1; i <= N; i++) {
		int col = i;
		for (int j = 1; j <= H; j++) {
			if (ladder[j][col]) {
				col++;
				//cout << "right" << '\n';
			}
			else if (col > 1 && ladder[j][col - 1]) {
				col--;
				//cout << "left" << '\n';
			}
		}
		if (col != i) {
			//cout << '\n';
			return false;

		}
	}
	//cout << '\n';
	return true;
}

void backtracking(int maxcnt, int cnt) {
	if (maxcnt == cnt) {
		//cout << maxcnt << " " << cnt << endl;
		if (check()) {
			answer = maxcnt;
			cout << answer << '\n';
			exit(0);
		}
        return;
	}
	for (int i = 1; i < N; ++i) {
		for (int j = 1; j <= H; ++j) {
			if (ladder[j][i] || ladder[j][i - 1] || ladder[j][i + 1]) continue;
			ladder[j][i] = 1;
			backtracking(maxcnt, cnt + 1);
			ladder[j][i] = 0;

			while (!ladder[j][i - 1] && !ladder[j][i + 1]) j++;
		}
	}
	return;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	
	cin >> N >> M >> H;
	for (int i = 0; i < M; i++) {
		int a, b;
		cin >> a >> b;
		ladder[a][b] = 1;
	}

	for (int i = 0; i <= 3; i++) {
		backtracking(i, 0);
	}
	if (answer == 987654321)
		answer = -1;

	cout << answer << '\n';

	return 0;
}