#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	int N;
	int arr[3] = { 1,2,3 };
	cin >> N;
	int ans = 1;
	for (int i = 0; i < N; i++) {
		int x, y;
		cin >> x >> y;
		if (x == ans) {
			ans = y;
		}
		else if (y == ans) {
			ans = x;
		}
		
	}
	cout << ans << endl;
	return 0;
}