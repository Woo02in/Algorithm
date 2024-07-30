#include<iostream>
#include<algorithm>
#include<vector>
#include<utility>

using namespace std;

int n;
vector<int> v;

void func(int s,int e) {
	if (s >= e) return;
	if (s == e - 1) {
		cout << v[s] << '\n';
		return;
	}
	int idx = s + 1;
	while (idx < e) {
		if (v[s] < v[idx]) break;
		idx++;
	}
	func(s + 1, idx);
	func(idx, e);
	cout << v[s] << '\n';
	return;
}

int main(void) {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	while (cin >> n) {
		v.push_back(n);
	}
	func(0, v.size());
	return 0;
}