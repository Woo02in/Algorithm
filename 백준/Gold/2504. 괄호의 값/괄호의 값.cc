#include<iostream>
#include<algorithm>
#include<stack>
#include<queue>
#include<vector>
#include<string>
using namespace std;

int main() {
	string s;
	int answer = 0;
	stack<char> sta;
	cin >> s;
	int cnt = 1;
	for (int i = 0; i < s.size(); i++) {		
		if (s[i] == '(') {
			cnt *= 2;
			sta.push(s[i]);
		}		
		else if (s[i] == ')') {
			if (sta.empty() || sta.top() != '(') {
				answer = 0;
				break;
			}
			if (s[i - 1] == '(') {
				answer += cnt;
				cnt /= 2;
				sta.pop();
			}
			else {
				cnt /= 2;
				sta.pop();
			}
		}
		else if (s[i] == '[') {
			cnt *= 3;
			sta.push(s[i]);
		}
		else if (s[i] == ']') {
			if (sta.empty() || sta.top() != '[') {
				answer = 0;
				break;
			}
			if (s[i - 1] == '[') {
				answer += cnt;
				cnt /= 3;
				sta.pop();
			}
			else {
				cnt /= 3;
				sta.pop();
			}
		}
		
	}
	if (!sta.empty()) answer = 0;
	cout << answer;
	return 0;
}