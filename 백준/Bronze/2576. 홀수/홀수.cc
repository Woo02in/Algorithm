#include<iostream>	
#include<vector>
#include<algorithm>

using namespace std;

int num[7], ans;
vector<int>cal;
int cnt;
int main() {
	for (int i = 0; i < 7; i++) {
		cin >> num[i];
	}
	for (int i = 0; i < 7; i++) {
		if (num[i] % 2 == 1) {
			cal.push_back(num[i]);
		}
		else cnt++;
	}
	if (cnt == 7) {
		cout << "-1";
	}
	else {
		sort(cal.begin(), cal.end());
		for (int i = 0; i < cal.size(); i++) {
			ans += cal[i];
		}
		cout << ans << endl << cal[0];
	}
	return 0;
}