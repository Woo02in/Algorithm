#include<iostream>
#include<algorithm>
#include<queue>
#include<vector>
using namespace std;
int N;
vector<int> v;
int main() {
	cin >> N;
	int x;
	for (int i = 0; i < N; i++) {
		cin >> x;
		v.push_back(x);
	}
	sort(v.begin(), v.end());
	int sum = 1;
	for (int i = 0; i < N; i++) {
		if (v[i] > sum)
			break;
		sum += v[i];
	}
	cout << sum;
	return 0;
}