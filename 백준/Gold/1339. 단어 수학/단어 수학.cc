#include<iostream>
#include<algorithm>
#include<vector>
#include<utility>
#include<string>
using namespace std;

int N, result;
vector<string> s;
int alpha[26];
int len[10];

bool compare(int a, int b) {
	return a > b;
}
int main() {
	cin >> N;
	for (int i = 0; i < N; i++) {
		string a;
		cin >> a;
		s.push_back(a);		
	}
	for (int i = 0; i < N; i++) {
		len[i] = s[i].size();
	}
	int cnt = 1;
	for (int i = 0; i < N; i++) {
		cnt = 1;
		for (int j = len[i] - 1; j >= 0; j--) {
			alpha[s[i][j] - 'A'] += cnt;
			cnt *= 10;
		}
	}
	sort(alpha, alpha + 26, compare);
	for (int i = 0; i < 10; i++) {
		result += alpha[i] * (9 - i);
	}
	cout << result << endl;
	return 0;
}