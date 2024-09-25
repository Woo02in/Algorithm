#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
vector<int> v;
long long ans = 0;
long long N, M;
int main() {
	cin.sync_with_stdio(0);
	cin.tie(0);
	
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		int x;
		cin >> x;
		v.push_back(x);
	}
	sort(v.begin(), v.end());
	long long left = 1;
	long long right = v[v.size() - 1];

	while (left <= right) {
		long long sum = 0;
		long long mid = (left + right) / 2;
		for (int i = 0; i < N; i++) {
			if (v[i] - mid >= 0) {
				sum += v[i] - mid;
			}
		}
		if (sum >= M) {
			if (ans < mid) {
				ans = mid;
			}
			left = mid + 1;
		}
		else right = mid - 1;

	}
	cout << ans << "\n";
	return 0;
}