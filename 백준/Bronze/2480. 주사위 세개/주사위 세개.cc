#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;

int main() {
	int a, b, c, ans = 0;
	cin >> a >> b >> c;
	int M = max({ a,b, c });
	if (a == b && b == c) {
		ans = 10000 + (a * 1000);
	}
	else if ((a == b && b != c) || (a == c && a != b)) {
		ans = 1000 + (a * 100);
	}
	else if (b == c && a != b) {
		ans = 1000 + (b * 100);
	}
	else {
		ans = M * 100;
	}
	cout << ans;
	return 0;
}