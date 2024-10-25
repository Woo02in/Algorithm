#include<iostream>

using namespace std;
int ans, a, b;
int main() {
	
	cout << "? A 1" << endl;
	cin >> ans;
	if (ans) a = 1;
	cout << "? A 2" << endl;
	cin >> ans;
	if (ans) a = 2; 
	cout << "? A 3" << endl;
	cin >> ans;
	if (ans) a = 3; 
	cout << "? A 4" << endl;
	cin >> ans;
	if (ans) a = 4; 
	cout << "? A 5" << endl;
	cin >> ans;
	if (ans) a = 5; 
	cout << "? A 6" << endl;
	cin >> ans;
	if (ans) a = 6; 
	cout << "? A 7" << endl;
	cin >> ans;
	if (ans) a = 7;
	cout << "? A 8" << endl;
	cin >> ans;
	if (ans) a = 8;
	cout << "? A 9" << endl;
	cin >> ans;
	if (ans) a = 9;

	cout << "? B 1" << endl;
	cin >> ans;
	if (ans) b = 1;
	cout << "? B 2" << endl;
	cin >> ans;
	if (ans) b = 2;
	cout << "? B 3" << endl;
	cin >> ans;
	if (ans) b = 3;
	cout << "? B 4" << endl;
	cin >> ans;
	if (ans) b = 4;
	cout << "? B 5" << endl;
	cin >> ans;
	if (ans) b = 5;
	cout << "? B 6" << endl;
	cin >> ans;
	if (ans) b = 6;
	cout << "? B 7" << endl;
	cin >> ans;
	if (ans) b = 7;
	cout << "? B 8" << endl;
	cin >> ans;
	if (ans) b = 8;
	cout << "? B 9" << endl;
	cin >> ans;
	if (ans) b = 9;

	int answer = a + b;
	cout << "! " << answer << endl;
	return 0;
}

