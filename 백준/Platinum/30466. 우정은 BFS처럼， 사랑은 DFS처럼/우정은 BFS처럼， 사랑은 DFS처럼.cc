#include<iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	long long n, m;
	cin >> n;
	m = n / 2;
	long long i = 1;
	cout << (m - 1) * (n * 2 - m * 2 - 2) << '\n';
	for (i; i<=m; i++) {
		cout << i << " " << i+1 << '\n';
	}
	for (i = i+ 1; i <= n; i++) {
		cout << 1 <<" " << i << '\n';
	}
	return 0;
}