#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	int map[9][9] = { 0, };
	int cnt = -1, ansx = 0, ansy = 0;
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			cin >> map[i][j];
			if (cnt < map[i][j]) {
				cnt = map[i][j];
				ansx = i + 1;
				ansy = j + 1;
			}			
		}
	}
	cout << cnt << endl << ansx << " " << ansy;
	return 0;
}