#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int N, L;
vector<int> tape;
int main() {
	cin >> N >> L;
	int x, answer = 1;
	for (int i = 0; i < N; i++) {
		cin >> x;
		tape.push_back(x);
	}
	sort(tape.begin(), tape.end());
	int start = tape[0];
	for (int i = 1; i < N; i++) {
		if (tape[i] - start <= L - 1) {
			continue;
		}
		else {
			start = tape[i];
			answer++;
		}
		
	}
	cout << answer;
	return 0;
}