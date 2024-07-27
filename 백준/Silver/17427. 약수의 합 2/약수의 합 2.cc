#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	long long n, sum = 0;
	cin >> n;
	for (long long i = 1; i <= n; i++) {
		sum += n / i * i;
	}

	cout << sum << endl;
	return 0;
}