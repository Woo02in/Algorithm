#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
using namespace std;
vector<int> v;
int main() {
	int n, sum = 0, ans = 0, ans_2 = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		sum += x;
		v.push_back(x);
	}
	int aver = sum / n;
	for (int i = 0; i < n; i++) {
		if (v[i] < aver) {
			ans += aver - v[i];
		}
		else if (v[i] > aver + 1) {
			ans_2 += v[i] - (aver + 1);
		}
	}
	int r;
	r = max(ans, ans_2);
	cout << r;
	return 0;
}