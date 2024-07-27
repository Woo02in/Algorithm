#include<iostream>
#include<string>
#include<algorithm>

using namespace std;
int v[4];
int main() {
	int input, output;
	int sum = 0;
	for (int i = 0; i < 4; i++) {
		cin >> output >> input;
		sum += input;
		sum -= output;
		v[i] = sum;
	}
	sort(v, v + 4);
	cout << v[3];
	return 0;
}