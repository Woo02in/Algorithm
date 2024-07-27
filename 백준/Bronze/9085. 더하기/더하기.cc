#include<iostream>

using namespace std;
int x;
int main() {
	int test;
	cin >> test;
	for (int i = 0; i < test; i++) {
		int N, ans = 0;
		cin >> N;
		for (int j = 0; j < N; j++) {
			cin >> x;
			ans += x;
		}
		cout << ans << endl;
	}

	return 0;
}