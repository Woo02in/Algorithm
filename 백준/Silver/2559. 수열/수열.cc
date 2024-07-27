#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

int main() {
	int n, k, temp[100001] = { 0, }, sum = 0, ans = -1000000;
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		cin >> temp[i];
	}
	for (int i = 0; i < n; i++) {	
		if (i < k) {
			sum += temp[i];
			if (i == k - 1)
				ans = max(ans, sum);
		}
		else {
			sum -= temp[i - k];
			sum += temp[i];
			ans = max(ans, sum);
		}
	}
	cout << ans << endl;
	return 0;
}