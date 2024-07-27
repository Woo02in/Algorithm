
#include<iostream>
#include<utility>
#include<vector>
using namespace std;

int main() {
	int N;
	cin >> N;
	int cnt = 666, ans = 0;
	while (true) {
		int tmp = cnt;
		while (tmp) {
			if (tmp % 1000 == 666) {
				ans++;
				break;
			}
			tmp /= 10;					
		}
		if (ans == N) {
			cout << cnt;
			break;
		}
		cnt++;
	}
	return 0;
}