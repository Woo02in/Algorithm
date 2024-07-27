#include<iostream>

using namespace std;

int main() {
	int n, a, b, Q1 = 0, Q2 = 0, Q3 = 0, Q4 = 0, AXIS = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		if (a == 0 || b == 0)
			AXIS++;
		else if (a > 0 && b > 0)
			Q1++;
		else if (a < 0 && b>0)
			Q2++;
		else if (a < 0 && b < 0)
			Q3++;
		else if (a > 0 && b < 0)
			Q4++;
	}
	cout << "Q1: " << Q1 << endl;
	cout << "Q2: " << Q2 << endl;
	cout << "Q3: " << Q3 << endl;
	cout << "Q4: " << Q4 << endl;
	cout << "AXIS: " << AXIS << endl;

	return 0;
}
