#include<iostream>
#include<algorithm>
#include<algorithm>
#include<cstring>
#include<queue>
#include<stack>
#include<string>
using namespace std;

int A,K;
string N;
stack<char> sta;
stack<char> sample;
int main() {
	int left = A - K;
	cin >> A >> K;
	cin >> N;
	for (int i = 0; i < A; i++) {
		char x = N[i];		
		if (K > 0) {
			if (sta.empty()) {
				sta.push(x);
			}
			else {
				if (sta.top() < x) {
					while (sta.size() && K>0) {
						if (sta.top() < x) {
							sta.pop();
							K--;
						}
						else break;
					}
					sta.push(x);					
				}
				else sta.push(x);
			}
		}
		else {
			sta.push(x);
		}
	}
	while (K > 0) {
		K--;
		sta.pop();
	}
	
	vector<char> v;
	while (!sta.empty()) {
		v.push_back(sta.top());
		sta.pop();
	}
	
	for (int i = v.size() - 1; i >= 0; i--) {
		cout << v[i];
	}
	
	return 0;
}