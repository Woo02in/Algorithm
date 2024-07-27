#include<iostream>
#include<string>

using namespace std;

string s;
int age;
int weight;

int main() {
	while (true) {
		cin >> s >> age >> weight;
		if (s == "#" || age == 0 || weight == 0) {
			break;
		}
		else if (age > 17 || weight >= 80) {
			cout << s << " " << "Senior" << endl;
		}
		else {
			cout << s << " " << "Junior" << endl;
		}
	}
	return 0;
}