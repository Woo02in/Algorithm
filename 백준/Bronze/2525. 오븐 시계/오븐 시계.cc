#include<iostream>

using namespace std;

int main() {
	int H, M, time;
	cin >> H >> M;
	cin >> time;
	int x = time / 60;
	int y = time % 60;
	if (M + y >= 60) {
		M = M + y - 60;
		H++;
	}
	else M = M + y;
	if (H + x >= 24) {
		H = H + x - 24;
	}
	else H = H + x;
	cout << H << " " << M;
	return 0;
}