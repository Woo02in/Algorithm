#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	int N, k;
	cin >> N >> k;
	vector<int> v;
	for (int i = 0; i < N; i++) {
		int n = 0;
		cin >> n;
		v.push_back(n);
	}
	sort(v.begin(), v.end());
	/*for (int i = 0; i < N; i++) {
		cout << v[i] << endl;
	}*/
	cout << v[N - k];
	return 0;
}