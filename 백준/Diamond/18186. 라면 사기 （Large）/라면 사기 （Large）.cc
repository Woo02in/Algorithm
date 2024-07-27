#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
long long N, answer, B,C;
//vector<int> ram(100000);
long long ram[1000003];
int main() {
	cin >> N >> B >> C;
	for (int i = 0; i < N; i++) {
		cin >> ram[i];
	}
	if (B < C) {
		for (int i = 0; i < N; i++) {
			answer += ram[i] * B;
		}
	}
	else {
		for (int i = 0; i < N; i++) {
			if (ram[i + 1] > ram[i + 2]) {
				long long cost = min(ram[i], ram[i + 1] - ram[i + 2]);
				answer += (B + C) * cost;
				ram[i] -= cost;
				ram[i + 1] -= cost;

				long long cost2 = min(ram[i], min(ram[i + 1], ram[i + 2]));
				answer += (B + 2 * C) * cost2;
				ram[i] -= cost2;
				ram[i + 1] -= cost2;
				ram[i + 2] -= cost2;
			}
			else {
				long long count = min(ram[i], min(ram[i + 1], ram[i + 2]));
				answer += (B + 2 * C) * count;
				ram[i] -= count;
				ram[i + 1] -= count;
				ram[i + 2] -= count;
				long long count2 = min(ram[i], ram[i + 1]);
				answer += (B + C) * count2;
				ram[i] -= count2;
				ram[i + 1] -= count2;
			}
			answer += B * ram[i];
			ram[i] = 0;
		}
	}
	cout << answer;
	return 0;
}

