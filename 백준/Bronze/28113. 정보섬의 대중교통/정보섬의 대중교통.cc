#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	int N, A, B;
	cin >> N >> A >> B;
	if (A == B) {
		cout << "Anything" << endl;
	}
	else if (A > B) {
		cout << "Subway" << endl;
	}
	else {
		cout << "Bus" << endl;
	}
	return 0;
}