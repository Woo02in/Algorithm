#include<iostream>

using namespace std;

int main() {
	int test;
	cin >> test;
	for (int q = 0; q < test; q++) {
		int n, m, a, b;
		cin >> n >> m;
		for (int i = 0; i < m; i++) {
			cin >> a >> b;
		}
		cout << n - 1 << endl;
	}
	
	return 0;
}