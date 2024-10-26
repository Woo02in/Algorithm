#include<iostream>

using namespace std;

int N;
int main() {
	char ans;
	
	for (int i = 1; i <= 20000; i++) {
		cout << "? 1"<< endl;
		cin >> ans;
		if (ans == 'Y') {
			cout << "! 1"<< endl;
			break;
		}
	}


	return 0;
}