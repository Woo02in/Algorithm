#include<iostream>
#include<algorithm>
#include<vector>
#include<stack>
#include<cstring>

using namespace std;

stack<char> sta;
string s;
string bomb;
string answer;
int main() {
	cin >> s;
	cin >> bomb;
	
	for (int i = 0; i < s.size(); i++) {				
		sta.push(s[i]);
			
		if (s[i] == bomb[bomb.length() - 1] && sta.size() >= bomb.length()) {
			string tmp;
			for (int j = 0; j < bomb.size(); j++) {
				tmp.push_back(sta.top());
				sta.pop();
			}

			reverse(tmp.begin(), tmp.end());
		
			if (tmp.compare(bomb) != 0) {
				for (int i = 0; i < tmp.size(); i++) {
					sta.push(tmp[i]);
				}
			}
		}
	}
	while (!sta.empty()) {
		answer.push_back(sta.top());
		sta.pop();
	}
	reverse(answer.begin(), answer.end());
	if (answer.empty()) cout << "FRULA" << '\n';
	else cout << answer<<'\n';
	return 0;
}