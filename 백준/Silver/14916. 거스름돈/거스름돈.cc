#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main() {
	int money , answer =0;
	cin >> money;

	while (money > 0) {
		if (money == 1) {
			answer = -1;
			break;

		}
		if (money % 5 == 0) {
			answer += money / 5;
			break;
		}
		else {
			money -= 2;
			answer++;
		}
		
	}
	cout << answer;

	return 0;
}