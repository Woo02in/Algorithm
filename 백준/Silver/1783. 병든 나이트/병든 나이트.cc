#include<iostream>
#include<algorithm>

using namespace std;

int N, M, answer;

int main() {
	cin >> N >> M;
	if (N == 1) {
		answer = 1;
	}
	else if (N == 2) {
		answer = min(4, ((M - 1) / 2 + 1));
	}
	else if (M < 7) {
		answer = min(4, M);
	}
	else 
		answer = ((M-5)+2)+1;
	cout << answer << '\n';
	return 0;
}