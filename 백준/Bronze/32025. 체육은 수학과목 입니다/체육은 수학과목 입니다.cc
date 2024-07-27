#include<iostream>
#include<algorithm>
#include<cstring>
#include<vector>

using namespace std;

int H, W;

int main() {
	cin >> H >> W;
	if (H > W) {
		cout << W * 50 << endl;
	}
	else
		cout << H * 50 << endl;
	return 0;
}