#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	int arr[5] = { 0, };
	for (int i = 0; i < 5; i++) {
		cin >> arr[i];
	}
	int cnt = 1, ans =0;
	while (true) {
		for (int i = 0; i < 5; i++) {
			if (cnt % arr[i] == 0) {
				ans++;
			}						
		}
		if (ans >= 3) {
			cout << cnt << endl;
			return 0;
		}
		else ans = 0;
		cnt++;
	}
	
	return 0;
}