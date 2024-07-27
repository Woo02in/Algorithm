#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	int N, score[101];
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> score[i];
	}
	int test = 0, ans = 0;
	for (int i = 0; i < N; i++) {
		if (score[i] == 0) {
			test = 0;
		}
		else {
			test++;
			ans += test;
		}
	}
	cout << ans;
	return 0;
}