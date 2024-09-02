#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
int x, y;

int main() {
	cin >> x >> y;
	long long answer = 1;
	int cnt = x + y;
	if (y == 0) {
		cnt++;
	}
	for (int i = 1; i < cnt; i++) {
		answer += 6 * i;
	}
	cout << answer + y;
	return 0;
}