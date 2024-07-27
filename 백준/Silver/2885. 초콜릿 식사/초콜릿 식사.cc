#include<iostream>

using namespace std;

int main() {
	int K, size = 1;
	cin >> K;
	while (size < K) {
		size *= 2;
	}
	int cnt = 0,idx = size;
	while (K > 0) {
		if (K >= idx) {
			K -= idx;
		}
		else {
			idx /= 2;
			cnt++;
		}
	}
	cout << size << " " << cnt << endl;
	return 0;
}