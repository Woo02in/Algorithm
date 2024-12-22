#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;

int N, answer;
string s[51];
int check[51];
vector<string> ss;
bool flag;

bool cmp(string s1, string s2) {
	return s1.length() < s2.length();
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> s[i];
	}
	sort(s, s + N, cmp);
	for (int i = 0; i < N-1; i++) {		
		for (int j = i + 1; j < N; j++) {
			flag = false;
			
			for (int k = 0; k < s[i].size(); k++) {
				if (s[i][k] != s[j][k]) {
					flag = true;
					break;
				}
			}
			if (!flag) break;
		}
		if (!flag) {
			//cout << s[i] << '\n';
			answer++;
		}
	}
	if (N - answer == 0) {
		cout << 1 << '\n';
	}
	else cout << N - answer << '\n';
	return 0;
}