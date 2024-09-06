#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
#include<cstring>
#include <string>
using namespace std;
int N;
int num[10000001];

vector<int> v;
bool check(string s){
	bool flag = true;	
	for (int i = 0; i < s.size()/2; i++) {
		if (s[i] != s[s.size() - i - 1]) {
			flag = false;
		}
	}
	if (flag) return true;
	else return false;
	
}

int main() {	
	cin >> N;
	for (int i = 2; i < sqrt(10000000); i++) {
		if (!num[i]) {			
			for (int j = i+i; j <= 10000000; j += i) {
				num[j] = 1;
			}
		}
	}
	
	for (int i = 2; i <= 10000000; i++) {
		if (i >= N && num[i] == 0) {
			if (check(to_string(i))) {
				cout << i << '\n';
				break;
			}
		}
	}
	return 0;
}