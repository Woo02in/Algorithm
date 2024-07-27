#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	int N, cnt = 0;
	vector<int>v;
	cin >> N;
	for (int i = 0; i < N; i++) {
		int x; 
		cin >> x;
		if (v.empty() || v.back() < x) {
			v.push_back(x);
			cnt++;
		}
		else {
			vector<int>::iterator iter = lower_bound(v.begin(), v.end(), x);
			// x보다 크거나 같은 첫번째 원소의 위치
			// x를 기준으로 *iter  => index 앞은 x보다 작고, 뒤는 x보다 크거나 같음
			*iter = x;
		}
	}
	cout << cnt << "\n";

	return 0;
}