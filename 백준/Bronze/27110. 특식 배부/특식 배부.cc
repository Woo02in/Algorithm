#include<iostream>

using namespace std;

int main() {
	int N, A, ans = 0;;
	cin >> N;
	for (int i = 0; i < 3; i++) {
		cin >> A;
		if (A <= N)
			ans += A;
		else ans += N;
	}
	cout << ans << endl;

	return 0;
}