#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<queue>
#include<string>

using namespace std;

int main() {
	cin.sync_with_stdio(0);
	cin.tie(0);

	int N;
	cin >> N;
	string str;
	queue<int>q;
	while (N--) {
		cin >> str;
		if (str == "push") {
			int x;
			cin >> x;
			q.push(x);
		}
		else if (str == "pop") {
			if (q.empty()) {
				cout << "-1\n";
			}
			else {
				cout << q.front() << "\n";
				q.pop();
			}
		}
		else if (str == "back") {
			if (q.empty()) cout << "-1" << "\n";
			else cout << q.back() << "\n";
		}
		else if (str == "size") {
			cout << q.size() << "\n";
		}
		else if (str == "empty") {
			if (q.empty()) cout << "1" << "\n";
			else cout << "0" << "\n";
		}
		else if (str == "front") {
			if (q.empty()) cout << "-1" << "\n";
			else cout << q.front() << "\n";
		}
	}


}