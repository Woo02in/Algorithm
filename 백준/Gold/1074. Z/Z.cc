#include<iostream>
#include<algorithm>
typedef long long ll;
using namespace std;

void calc(int N, int r, int c) {
	ll k;
	ll mul;
	ll ret = 0;

	while (r) {
		mul = 2;
		for (k = 1; k <= r; k *= 2) {
			mul *= 4;
		}
		k /= 2;
		mul /= 4;
		ret += mul;
		r -= k;
	}


	while (c) {
		mul = 1;
		for (k = 1; k <= c; k *= 2) {
			mul *= 4;
		}
		k /= 2;
		mul /= 4;
		ret += mul;
		c -= k;
	}
	cout << ret;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int N, r, c;
	cin >> N >> r >> c;
	calc(N, r, c);

	return 0;
}

