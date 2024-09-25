#include<iostream>
#include<algorithm>

using namespace std;

int N, white, blue;
int map[129][129];

void cal(int N, int row, int col) {
	int color = map[row][col];
	for (int i = row; i < N + row; i++) {
		for (int j = col; j < col + N; j++) {
			if (map[i][j] != color) {
				cal(N / 2, row, col + N / 2);
				cal(N / 2, row, col);
				cal(N / 2, row + N / 2, col);
				cal(N / 2, row + N / 2, col + N / 2);
				return;
			}
		}
	}
	if (color) {
		blue++;
	}
	else {
		white++;
	}
	return;
}

int main() {
	cin.sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> N;
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			cin >> map[i][j];
		}
	}
	cal(N, 1, 1);
	cout << white << '\n' << blue;
	return 0;
}