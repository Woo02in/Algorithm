#include<string>
#include<iostream>

using namespace std;

int N, M;
string *board;

int com(int a, int b) {
	if (a + 7 >= N || b + 7 >= M) return 64;
	int x=0, y=0;
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if ((i+j) % 2 == 0) {
				if (board[a + i][b + j] == 'B') {
					x++;
				}
				else if (board[a + i][b + j] == 'W') {
					y++;
				}
			}
			else {
				if (board[a + i][b + j] == 'B') {
					y++;
				}
				else if (board[a + i][b + j] == 'W') {
					x++;
				}
			}
		}
	}
	return x < y ? x : y;
}

int main(){
	cin >> N >> M;
	board = new string[N];
	int result = 64;

	for (int i = 0; i < N; i++) {
		cin >> board[i];
	}
	for (int i = 0; i < N-7; i++) {
		for (int j = 0; j < M - 7; j++) {
			int tmp = com(i, j);
			result = result < tmp ? result : tmp;
		}
	}
	cout << result << endl;


	return 0;
}