#include<iostream>
#include<algorithm>
#include<string>
#include<stack>
using namespace std;

string bowl;
stack<char> sta;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);
	cin >> bowl;
	int answer = 10;
	for (int i = 1; i < bowl.size(); i++) {
		if (bowl[i] == bowl[i - 1]) {
			answer += 5;
		}
		else answer += 10;
	}
	cout << answer << '\n';
	return 0;
}