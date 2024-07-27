#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stack>
#include<string.h>

using namespace std;

int main() {
	while (1) {
		char input[101];
		cin.getline(input, 101);
		if (!strcmp(input, ".")) break;

		stack<char> s;
		bool flag = true;
		for (int i = 0; i < strlen(input); i++) {
			if (input[i] == '(' || input[i] == '[') {
				s.push(input[i]);
			}
			else if (input[i] == ')') {
				if (!s.empty() && s.top() == '(') {
					s.pop();
				}
				else {
					flag = false;
					break;
				}
			}
			else if (input[i] == ']') {
				if (!s.empty() && s.top() == '[') {
					s.pop();
				}
				else {
					flag = false;
					break;
				}
			}
		}
		if (flag && s.empty()) cout << "yes" << endl;
		else cout << "no" << endl;
	}
	return 0;
}