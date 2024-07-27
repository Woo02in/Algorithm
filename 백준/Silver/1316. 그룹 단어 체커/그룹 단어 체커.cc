#include<iostream>
#include<string>
#include<vector>

using namespace std;
string s;

int main() {
	int N, cnt = 0;
	cin >> N;
	for (int q = 0; q < N; q++) {
		int visit[26] = {0,};
		cin >> s;
		for (int i = 0; i < s.size(); i++) {
			if (visit[s[i] - 97] == 1) {
				cnt--;
				break;
			}
			else {
				visit[s[i] - 97] = 1;
				int num = 0;
				while (s[i] == s[i + 1]) {
					if (s[i + num] != s[i + 1 + num]) {
						break;
					}
					num++;
				}
				i += num;
			}
		}
		cnt++;
	}
	cout << cnt;
	return 0;
}