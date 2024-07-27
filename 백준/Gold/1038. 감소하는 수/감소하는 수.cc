#include<iostream>
#include<vector>
#include<stdlib.h>
#include<time.h>
#include<algorithm>
using namespace std;

int main() {
	vector<long long> v;
	long long NUM;
	for (int i = 1; i < 1024; i++) {
		NUM = 0;
		int temp = i;
		for (int j = 9; j >= 0; j--) {
			if (temp % 2 == 1) {
				NUM = NUM * 10 + j;
			}
			temp /= 2;
		}
		v.push_back(NUM);
	}
	sort(v.begin(), v.end());
	int num;
	cin >> num;
	if (num > 1022) cout<<-1;
	else cout << v.at(num);

	return 0;
}