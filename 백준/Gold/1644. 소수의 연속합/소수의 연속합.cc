#include<iostream>
#include<algorithm>
#include<vector>
#include<utility>

using namespace std;
int num;
int pri[4000001];
vector<int> prime;

int main() {
	cin >> num;
	int answer = 0;
	if (num == 1) {
		cout << 0 << '\n';
		return 0;
	}
	for (int i = 2; i*i <= num; i++) {
		if (pri[i] == 1) {
			continue;
		}		
		for (int j = i * i; j <= num; j += i) {
			pri[j] = 1;
		}
	}
	for (int i = 2; i <= num; i++) {
		if (pri[i] == 0) prime.push_back(i);
	}

	int s = 0, e = 0, sum = 0;
	while (e <= prime.size()) {
		if (sum > num) {
			sum -= prime[s];
			s++;			
		}
		else {
			if (e < prime.size()) {
				sum += prime[e];
				e++;
			}
			else break;
		}
		if (sum == num) answer++;
	}
	cout << answer << '\n';
	return 0;
}
