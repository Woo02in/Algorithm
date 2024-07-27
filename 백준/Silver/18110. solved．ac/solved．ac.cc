#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
using namespace std;

int main() {
	int N;
	cin >> N;
	if (N == 0) {
		cout << 0 << endl;
		return 0;
	}
	vector<int> v;
	for (int i = 0; i<N; i++) {
		int x;
		cin >> x;
		v.push_back(x);
	}
	sort(v.begin(), v.end());
	double cnt = floor((N * 0.15)+0.5);
	double sum = 0;
	for (double i = cnt; i < N - cnt; i++) {
		sum += v[i];		
	}
	double answer = floor(sum / (N - 2 * cnt) + 0.5);	
	cout << answer << endl;
	return 0;
}