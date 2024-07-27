#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main() {
	int N, M;
	cin >> N >> M;
	char map[51][51];
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> map[i][j];
		}
	}
	int cnt_row = 0, cnt_col = 0;
	int row[51] = { 0, };
	int col[51] = { 0, };
	for (int i = 0; i < N; i++) {
		bool flag = false;
		for (int j = 0; j < M; j++) {
			if (map[i][j] == 'X') {
				row[i] = 1;
				col[j] = 1;
			}			
		}		
	}
	
	for (int i = 0; i < N; i++) {
		if (!row[i]) cnt_row++;
	}
	for (int i = 0; i < M; i++) {
		if (!col[i]) cnt_col++;
	}
	int answer = max(cnt_row, cnt_col);
	cout << answer << '\n';
	return 0;
}