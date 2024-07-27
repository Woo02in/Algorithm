#include<iostream>
#include<algorithm>
#include<deque>
using namespace std;

int main() {
	int N;
	deque<int> dq;
	cin >> N;
	for (int i = 1; i <= N; i++) {
		dq.push_back(i);
	}
	while (!dq.empty()) {
		cout << dq.front() << " ";
		dq.pop_front();
		if (dq.empty()) break;
		int x = dq.front();
		dq.pop_front();
		dq.push_back(x);
	}
	return 0;
}