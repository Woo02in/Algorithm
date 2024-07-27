#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	int T, five = 0, one = 0, tens = 0;
	cin >> T;
	if (T % 10 != 0) {
		cout << "-1";
		return 0;
	}
	while (T > 0) {
		if (T >= 300) {
			T -= 300;
			five++;
			continue;
		}
		if (T >= 60) {
			T -= 60;
			one++;
			continue;
		}
		if (T >= 10) {
			T -= 10;
			tens++;
			continue;
		}
	}
	cout << five << " " << one << " " << tens;
	return 0;
}