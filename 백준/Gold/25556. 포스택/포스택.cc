#include<iostream>
#include<algorithm>
#include<vector>
#include<stack>

using namespace std;
int N;
stack<int> sta1;
stack<int> sta2;
stack<int> sta3;
stack<int> sta4;
int main() {
	cin >> N;
	int x;
	bool flag = true;
	for (int i = 0; i < N; i++) {
		
		cin >> x;

		if (sta1.empty()) {
			sta1.push(x);
		}
		if (!sta1.empty() && sta1.top() < x) {
			sta1.push(x);
		}
		else if (!sta1.empty() && sta1.top() > x) {
			if (sta2.empty()) {
				sta2.push(x);
			}
			else {
				if (sta2.top() < x) {
					sta2.push(x);
				}
				else {
					if (sta3.empty()) {
						sta3.push(x);
					}
					else{
						if (sta3.top() < x) {
							sta3.push(x);
						}
						else {
							if (sta4.empty()) {
								sta4.push(x);
							}
							else {
								if (sta4.top() < x) {
									sta4.push(x);
								}
								else flag = false;
							}
						}
					}
				}
			}
		}
	}
	if (flag) cout << "YES" << '\n';
	else cout << "NO" << '\n';

	return 0;
}