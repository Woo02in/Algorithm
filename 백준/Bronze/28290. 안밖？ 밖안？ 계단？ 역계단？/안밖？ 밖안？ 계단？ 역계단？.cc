#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

string s;

int main(){
	cin >> s;
	if (s == "fdsajkl;" || s == "jkl;fdsa") {
		cout << "in-out" << '\n';
	}
	else if (s == "asdf;lkj" || s == ";lkjasdf") {
		cout << "out-in" << endl;
	}
	else if (s == "asdfjkl;") {
		cout << "stairs" << endl;
	}
	else if (s == ";lkjfdsa") {
		cout << "reverse" << endl;
	}
	else cout << "molu" << endl;
	return 0;
}