#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
using namespace std;

long long N, ret = 999999999999999;
vector<long long> v;
long long answer[4];

int main() {
	cin >> N;
	for (int i = 0; i < N; i++) {
		int x;
		cin >> x;
		v.push_back(x);
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < N-1; i++) {
		long long s = i + 1;
		long long e = N-1;
		while (s < e) {
			long long a = v[i] + v[s] + v[e];
			if (abs(a) < ret) {
				ret = abs(a);
				answer[0] = v[i];
				answer[1] = v[s];
				answer[2] = v[e];
			}
			if (a < 0) s++;
			else e--;
		}
	}
	for (int i = 0; i < 3; i++) {
		cout << answer[i] << " ";
	}
	return 0;
}

