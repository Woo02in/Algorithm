#include<iostream>
#include<algorithm>
#include<vector>
#include<cstring>
#include<string>
#include<vector>
typedef long long ll;

using namespace std;
int now;

ll n, k;
vector<string> answer;

void backtracking(int num, int cur, string s) {
	for (int i = 1; i <= 3; i++) {
		cur += i;
		s += to_string(i);
		if (cur > num) {
			s.erase(s.size() - 1);
			continue;
		}
		else if (cur == num) answer.push_back(s);
		else backtracking(num, cur, s);
		cur -= i;
		s.erase(s.size() - 1);
	}
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	now = 1;
	cin >> n >> k;
	backtracking(n, 0, "");

	sort(answer.begin(), answer.end());
	if (answer.size() < k) {
		cout << -1;
	}
	else {
		for (int i = 0; i < answer[k - 1].size(); i++) {
			if (i == answer[k - 1].size() - 1) cout << answer[k - 1][i] << '\n';
			else cout << answer[k - 1][i] << '+';
		}
	}
	

	/*for (int i = 0; i < answer.size(); i++) {
		cout << answer[i] << endl;
	}*/
	return 0;
}