#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main() {
	string L, R;
	cin >> L >> R;
	int answer = 0;
	if (L.size() != R.size()) answer = 0;
	else {
		for (int i = 0; i < L.size(); i++) {
			if ((L[i] == R[i]) && L[i] == '8') {
				answer++;
			}
			else if ((L[i] == R[i]) && L[i] != '8') {
				continue;
			}
			else if (L[i] != R[i]) break;
		}
	}
	cout << answer << endl;
	return 0;
}