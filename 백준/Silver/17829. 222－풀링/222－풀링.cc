#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>

using namespace std;
int N;
int map[1024][1024];

int divide(int half, int x, int y) {
	vector<int> v;
	if (half == 1) {
		v.push_back(map[x][y]);
		v.push_back(map[x][y + 1]);
		v.push_back(map[x + 1][y]);
		v.push_back(map[x + 1][y + 1]);
		sort(v.begin(), v.end());
		return v[2];
	}
	else {
		v.push_back(divide(half / 2, x, y));
		v.push_back(divide(half / 2, x + half, y));
		v.push_back(divide(half / 2, x, y+half));
		v.push_back(divide(half / 2, x+half, y+half));
		sort(v.begin(), v.end());
		return v[2];
	}
}
int main() {
	cin >> N;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cin >> map[i][j];
		}
	}
	cout << divide(N / 2, 0, 0) << endl;
	return 0;
}
