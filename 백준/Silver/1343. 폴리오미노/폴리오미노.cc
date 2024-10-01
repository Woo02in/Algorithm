#include<iostream>
#include<algorithm>
#include<cstring>

using namespace std;
string board;

int main() {
	cin >> board;
	board += ' ';
	string answer = "";
	int cnt = 0;
	for (int i = 0; i < board.size()-1; i++) {		
		if (board[i] != '.') {			
			cnt++;
		}
		else{
			answer += ".";
			if (cnt % 2 != 0) break;
			else cnt = 0;
		}
		if (cnt == 2 && board[i + 1] != 'X') {
			answer += "BB";
			cnt = 0;
		}
		else if (cnt == 4) {
			answer += "AAAA";
			cnt = 0;
		}
				
	}
	if (cnt % 2 == 1) cout << -1 << '\n';
	else cout << answer << '\n';

	return 0;
}