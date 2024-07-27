#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
	int n, w,h;
	cin >> n;
	vector<int> v;
	for (int i = 0; i < n; i++) {
		cin >> h >> w;
		v.push_back(h * w);
	}
	sort(v.begin(), v.end());

	cout << v[v.size() - 1] << endl;
	return 0;
}