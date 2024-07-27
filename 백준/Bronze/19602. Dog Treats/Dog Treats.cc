#include<iostream>


using namespace std;

int main() {
	int s, m, l;
	cin >> s >> m >> l;
	int sum = 0;
	sum += s * 1 + m * 2 + l * 3;
	if (sum >= 10) {
		cout << "happy" << endl;
	}
	else
		cout << "sad" << endl;

	return 0;
}