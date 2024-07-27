#include<iostream>

using namespace std;
int stick[100001];
int main() {
	/*char a[4] = "ABC";
	cout << sizeof(a) << endl;
	cout << strlen(a) <<endl;*/
	int N, ans = 1;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> stick[i];
	}
	for (int i = N-1; i >= 1; i--) {
		if (stick[i] > stick[i - 1]) {
			stick[i - 1] = stick[i];
			continue;
		}
		else if (stick[i] == stick[i - 1]) {
			continue;
		}
		else {
			ans++;
		}
	}
	cout << ans;
	return 0;
}