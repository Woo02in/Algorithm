#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	int a[3] = { 0, };
	cin >> a[0] >> a[1] >> a[2];
	sort(a, a+3);
	
	if (a[2] >= a[0] + a[1]) {
		cout << (a[0] + a[1]) * 2 - 1 << endl;
	}
	else {
		cout << a[0] + a[1] + a[2] << endl;
	}
	return 0;
}