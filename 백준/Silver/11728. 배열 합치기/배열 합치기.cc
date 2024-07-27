#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int N, B, x;
	vector<int> v;
	cin >> N >> B;
	for (int i = 0; i < N + B; i++) {
		cin >> x;
		v.push_back(x);
	}

	sort(v.begin(), v.end());
	for (int i = 0; i < N + B; i++) {
		cout << v[i] << " ";
	}
	return 0;
}