#include<iostream>
#include<algorithm>
#include<vector>
#include<math.h>
using namespace std;

int house[200001];

int main() {
	cin.sync_with_stdio(0);
	cin.tie(0);

	int N, C;
	cin >> N >> C;
	for (int i = 0; i < N; i++) {
		cin >> house[i];
	}
	sort(house, house + N);

	int left = 1;
	int right = house[N - 1] - house[0];
	int res = 0;

	while (left <= right) {
		int mid = (left + right) / 2;
		int cnt = 1;
		int init = house[0];
		for (int i = 1; i < N; i++) {
			if (house[i] - init >= mid) {
				cnt++;
				init = house[i];
			}
		}
		if (cnt >= C) {
			res = max(res, mid);
			left = mid +1;
		}
		else right = mid - 1;
	}
	cout << res << "\n";
	return 0;
}