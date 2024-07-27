#include<iostream>
#include<string>
using namespace std;

int main() {
	string in, out;

	cin >> in >> out;
	if (in.size() >= out.size()) {
		cout << "go";
	}
	else {
		cout << "no";
	}

	return 0;
}