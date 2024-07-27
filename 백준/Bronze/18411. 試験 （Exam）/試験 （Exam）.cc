#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	int a[3];
	for (int i = 0; i < 3; i++) {
		cin >> a[i];
	}
	sort(a, a + 3);
	int sum = 0;
	for (int i = 2; i >= 1; i--) {
		sum += a[i];
	}
	cout << sum << endl;
	return 0;
}