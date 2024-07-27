#include<iostream>
using namespace std;
int main() {
	int n, cnt = 0;
	char x;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x;
		if (x == 'a' || x == 'i' || x == 'u' || x == 'e' || x == 'o')
			cnt++;
	}
	cout << cnt;
	return 0;
}