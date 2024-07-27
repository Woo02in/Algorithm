#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <cmath>

using namespace std;
int main() {
	string N;
	cin >> N;
	int len = int(N.size());

	if (len == 1) {
		cout << N << endl;
		return 0;
	}
	long long answer = 0;
	for (int i = 1; i < len; i++) {
		answer += i * (9 * pow(10, i - 1));
	}
	answer += len * (stoi(N) - pow(10, len - 1) + 1);
	cout << answer << endl;
}