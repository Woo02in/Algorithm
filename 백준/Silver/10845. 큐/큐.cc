#include<iostream>
#include<queue>
#include<string>
using namespace std;

int main() {
	int n;
	queue<int> q;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		int a;
		if (s == "push") {
			cin >> a;
			q.push(a);
		}
		else if (s == "pop") {
			if (q.empty()) {
				cout << "-1" << endl;
			}
			else {
				cout << q.front() << endl;
				q.pop();
			}
		}
		else if (s == "size") {
			cout << q.size() << endl;
		}
		else if (s == "empty") {
			if (q.empty()) {
				cout << '1' << endl;
			}
			else cout << '0' << endl;
		}
		else if (s == "front") {
			if (q.empty()) {
				cout << "-1" << endl;
			}
			else cout << q.front() << endl;
		}
		else if (s == "back") {
			if (q.empty()) {
				cout << "-1" << endl;
			}
			else cout << q.back() << endl;
		}
	}


	return 0;
}