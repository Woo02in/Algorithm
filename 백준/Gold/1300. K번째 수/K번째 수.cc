#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main() {
	cin.sync_with_stdio(0);
	cin.tie(0);

	int N, K;
	cin >> N >> K;
	int cnt, mid, left = 1, right = K, res;
	
	while (left <= right) {
		cnt = 0;
		mid = (left + right) / 2;
		for (int i = 1; i <= N; i++) {
			if (mid / i <= 0) {
				break;
			}
			if (mid / i > N) {
				cnt += N;
			}
			else cnt += mid / i;
		}
		if (cnt < K) {
			left = mid + 1;
		}
		else {
			res = mid;
			right = mid - 1;
		}
	}
	cout << res << "\n";

	return 0;
}