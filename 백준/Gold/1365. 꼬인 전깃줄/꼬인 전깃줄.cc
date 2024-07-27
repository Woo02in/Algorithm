#include<iostream>
#include<algorithm>
#include<vector>
#include<utility>

using namespace std;

int N;
vector<int> v;

int func(vector<int> v, int num) {
	int low = 0, high = v.size() - 1;
	while (low < high) {
		int mid = (low + high) / 2;
		if (v[mid] >= num) high = mid;
		else low = mid + 1;
	}
	return high;
}

int main() {
	cin >> N;
	for (int i = 0; i < N; i++) {
		int x;
		cin >> x;
		if (v.empty()) v.push_back(x);
		else if (v[v.size() - 1] < x) v.push_back(x);
		else {
			v[func(v, x)] = x;
		}
	}
	/*for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}*/
	cout << N - v.size();
	return 0;
}
