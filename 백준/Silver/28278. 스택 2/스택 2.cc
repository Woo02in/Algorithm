#include<iostream>
#include<algorithm>
#include<stack>

using namespace std;
int N;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	cin >> N;
	stack<int> sta;

	for (int i = 0; i < N; i++) {
		int order;
		cin >> order;
		if (order == 1) {
			int x;
			cin >> x;
			sta.push(x);
		}
		else if (order == 2) {
			if (!sta.empty()) {
				cout << sta.top() << '\n';
				sta.pop();
			}
			else {
				cout << -1 << '\n';
			}
		}
		else if (order == 3) {
			cout << sta.size() << '\n';
		}
		else if (order == 4) {
			if (!sta.empty()) {
				cout << 0 << '\n';
			}
			else cout << 1 << '\n';
		}
		else if (order == 5) {
			if (!sta.empty()) {
				cout << sta.top() << '\n';			
			}
			else {
				cout << -1 << '\n';
			}
		}
	}

	return 0;
}