#include<iostream>

using namespace std;
typedef long long ll;
ll cnt = 0;
int main() {
	ll X, Y;
	cin >> X >> Y;
	int abt = (100 * Y) / X;
	if (abt >= 99) {
		cout << "-1" << endl;
		return 0;
	}
	int left = 0, right = 1000000000;
	int res = -1;
	while (right - left >= 0) {
		ll mid = (left + right) / 2;
		cnt = (100 * (Y + mid)) / (X + mid);
		//cout << left << " " << right << " " << mid << " " << cnt << endl;

		if (cnt <= abt) {
			res = mid + 1;
			left = mid + 1;
		}
		else {
			right = mid - 1;	
		}
	}
	cout << res << endl;
	
	return 0;
}