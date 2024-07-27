#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;


int main() {
	cin.sync_with_stdio(0);
	cin.tie(0);
	
	vector <long long> v;
	long long res = 0;
	long long N, K;
	
	cin >> N >> K;
	for (int i = 0; i < N; i++) {
		long long x;
		cin >> x;
		v.push_back(x);
	}
	sort(v.begin(), v.end());
	long long size = v.size();
	long long left = 1;
	long long right = v[size - 1];

	while (left <= right) {
		long long mid = (left + right) / 2;
		long long num = 0;

		for (int i = 0; i < N; i++) {
			num += v[i] / mid;
		}
		if (num >= K) {
			left = mid + 1;
			if (mid > res) {
				res = mid;
			}
		}
		else right = mid - 1;
	}
	cout << res <<"\n";
	return 0;
}