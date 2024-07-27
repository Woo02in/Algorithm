#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<cmath>
using namespace std;

int remocon[10] ={0,}, N, answer;
string channel;
char arr[500001];

int main() {
	cin >> channel;	
	cin >> N;
	int real_answer = abs(stoi(channel) - 100);
	for (int i = 0; i < N; i++) {
		int x;
		cin >> x;
		remocon[x] = 1;
	}
	for (int i = 0; i < 1000001; i++) {
		bool flag = true;
		string tmp = to_string(i);
		for (int j = 0; j < tmp.size(); j++) {
			if (remocon[tmp[j] - '0']) {
				flag = false;
			}			
		}
		if (flag) {
			int ans = abs(stoi(channel) - i) + to_string(i).length();
			real_answer = min(real_answer, ans);
		}
	}
	
	
	cout << real_answer << endl;

	return 0;
}