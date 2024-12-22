#include<iostream>
#include<algorithm>
#include<vector>
#include<utility>
#include<cmath>
using namespace std;

int N;
int answer;
vector<int> v;


int main() {
	cin >> N;
	for (int i = 0; i < N; i++) {
		int a, b;
		cin >> a >> b;
		v.push_back(a - b);
	}	
	sort(v.begin(), v.end());
	if (N % 2 == 0) {
		cout << v[N / 2] - v[N / 2 - 1] + 1 << '\n';
	}
	else cout << 1 << '\n';
	
	return 0;
}