#include<iostream>
#include<algorithm>
#include<cstring>
#include <string>
#include<stack>
using namespace std;

string s;
stack<char> sta;
string answer;
int flag;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	
	getline(cin, s);
	for (int i = 0; i < s.size(); i++) {
		//cout << i << " flag : " << flag << endl;
		if (s[i] == '<') {
			if (!sta.empty()) {
				while (!sta.empty()) {
					answer += sta.top();
					sta.pop();
				}
			}
			flag = 1;
			answer += '<';
			continue;
		}
		if (s[i] == '>') {
			flag = 0;
			answer += '>';
			continue;
		}
		if (flag) {		
			answer += s[i];
		}
		else {
			if(s[i] != ' ')
				sta.push(s[i]);
			else if(s[i] ==' ' || s[i] == '<'){
				while (!sta.empty()) {
					answer += sta.top(); 
					sta.pop();
				}
				if(s[i] == ' ')
					answer += ' ';
			}
		}
	}
	if (!sta.empty()) {
		while (!sta.empty()) {
			answer += sta.top();
			sta.pop();
		}
	}
	cout << answer << '\n';
	return 0;
}