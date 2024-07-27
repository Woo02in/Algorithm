#include<iostream>
#include<string>

using namespace std;

int main() {
	string num;
	cin >> num;
	int cnt_one = 0, cnt_zero = 0;
	
	for (int i = 1; i < num.size(); i++) {
		if (num[i - 1] == num[i]) {
			continue;
		}
		else {
			if (num[i] == '1') {
				cnt_zero++;
			}
			else {
				cnt_one++;
			}
		}
	}
	if (num[num.size() - 1] == '1') {
		cnt_one++;
	}
	else {
		cnt_zero++;
	}
	
	if (cnt_one < cnt_zero) {
		cout << cnt_one;
	}
	else {
		cout << cnt_zero;
	}
	return 0;
}