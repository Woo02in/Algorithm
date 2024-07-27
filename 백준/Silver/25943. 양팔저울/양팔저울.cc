#include<iostream>
#include<algorithm>
#include<stdlib.h>
using namespace std;

int main() {
	int left = 0, right = 0, N, x, arr[7] = { 1,2,5,10,20,50,100 };
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> x;
		if (left <= right)
			left += x;
		else
			right += x;
	}
	int cnt = abs(left - right), ans = 0;
	while (cnt > 0) {
		for (int i = 6; i >= 0; i--) {
			ans += cnt / arr[i];
			cnt %= arr[i];
		}
	}
	cout << ans;
	return 0;
}