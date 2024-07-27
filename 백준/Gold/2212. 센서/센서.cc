#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
using namespace std;
vector<int> m;
vector<int> p;
vector<int> answer;

int cmp(int a, int b) {
	return a > b;
}
int main() {
	int n, k, x;	
	cin >> n >> k;

	if (n <= k) {
		cout << 0;
		return 0;
	}
	for (int i = 0; i < n; i++) {
		cin >> x;
		if (x >= 0)
			p.push_back(x);
		else
			m.push_back(abs(x));
	}
	int sum = 0;
	sort(p.begin(), p.end());
	sort(m.begin(), m.end());
	if (p.size() != 0 && m.size() != 0) {
		answer.push_back((p[0] + m[0]));
		sum += (p[0] + m[0]);
		for (int i = 1; i < p.size(); i++) {
			answer.push_back(p[i] - p[i - 1]);
			sum += p[i] - p[i - 1];
		}
		for (int i = 1; i < m.size(); i++) {
			answer.push_back(m[i] - m[i - 1]);
			sum += m[i] - m[i - 1];
		}
	}
	else if (p.size() != 0 && m.size() == 0) {
		for (int i = 1; i < p.size(); i++) {
			answer.push_back(p[i] - p[i - 1]);
			sum += p[i] - p[i - 1];
		}
	}
	else {
		for (int i = 1; i < m.size(); i++) {
			answer.push_back(m[i] - m[i - 1]);
			sum += m[i] - m[i - 1];
		}
	}
	
	
	
	sort(answer.begin(), answer.end(),cmp);
	for (int i = 0; i < k-1; i++) {
		sum -= answer[i];
	}
	cout << sum;
	return 0;
}