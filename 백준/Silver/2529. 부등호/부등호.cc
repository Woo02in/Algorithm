#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
#include<string>

using namespace std;
int N;
char oper[10];
vector<int> v;
bool check[10]; 
vector<string> answer;
bool solution() {
	do {
		for (int i = 0; i < N; i++) {
			if (oper[i] == '<') {
				if (v[i] > v[i + 1]) {
					return false;
				}
			}
			else {
				if (v[i] < v[i + 1]) {
					return false;
				}
			}
		}
		return true;
	} while (next_permutation(v.begin(), v.end()));
}
void backtracking(int cnt) {
	if (cnt == N + 1) {		
		if (solution()) {
			string ans = "";
			for (int i = 0; i < v.size(); i++) {
				ans += to_string(v[i]);
			}
			answer.push_back(ans);
		}		
	}
	for (int i = 0; i < 10; i++) {
		if (!check[i]) {
			cnt++;
			v.push_back(i);
			//cout << i << " ";
			check[i] = true;
			backtracking(cnt);
			v.pop_back();
			cnt--;
			check[i] = false;
		}
		else continue;
	}
}
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> oper[i];
	}
	backtracking(0);
	cout << answer[answer.size()-1] << '\n' << answer[0];
	return 0;
}