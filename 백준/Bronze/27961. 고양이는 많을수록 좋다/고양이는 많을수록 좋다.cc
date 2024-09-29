#include<iostream>
#include<algorithm>
typedef long long ll;

using namespace std;
ll N;
ll cat;
int answer;



int main() {
	cin >> N;
	if (N == 1) {
		cout << 1 << '\n';
		return 0;
	}
	while (cat != N) {
		if (cat == 0) {
			cat++;
			answer++;
		}
		if (cat * 2 < N) {
			cat *= 2;
			answer++;
		}
		else if (cat * 2 >= N) {
			answer++;
			break;
		}
	}
	cout << answer << '\n';
	return 0;
}