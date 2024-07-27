#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int N, answer;
int ram[10003];
int main() {
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> ram[i];
	}
	for (int i = 0; i < N; i++) {
		if (ram[i + 1] > ram[i + 2]) {
			int cost = min(ram[i], ram[i + 1] - ram[i + 2]);
			answer += 5 * cost;
			ram[i] -= cost;
			ram[i + 1] -= cost;
		
			int cost2 = min(ram[i], min(ram[i + 1], ram[i + 2]));
			answer += 7 * cost2;
			ram[i] -= cost2;
			ram[i + 1] -= cost2;
			ram[i + 2] -= cost2;
		}
		else {
			int count = min(ram[i], min(ram[i + 1], ram[i + 2]));
			answer += 7 * count;
			ram[i] -= count;
			ram[i + 1] -= count;
			ram[i + 2] -= count;
			int count2 = min(ram[i], ram[i + 1]);
			answer += 5 * count2;
			ram[i] -= count2;
			ram[i + 1] -= count2;
		}
		answer += 3 * ram[i];
		ram[i] = 0;
	}
	cout << answer;
	return 0;
}

