#include<iostream>
#include<string>
#include<math.h>

using namespace std;

int main() {
	int a, b, c, d, e;
	int ans = 0;

	cin >> a >> b >> c >> d >> e;
	long long f = pow(a, 2) + pow(b, 2) + pow(c, 2) + pow(d, 2) + pow(e, 2);
	ans = f % 10;
	cout << ans;
	return 0;
}