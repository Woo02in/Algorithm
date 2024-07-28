#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>

using namespace std;

int main() {
	int T;
	cin >> T;
	while (T--) {
		int answer = 0;
		int x_1, y_1, x_2, y_2;
		cin >> x_1 >> y_1 >> x_2 >> y_2;
		int circle;
		cin >> circle;
		for (int i = 0; i < circle; i++) {
			int a, b, r;
			cin >> a >> b >> r;
			if (sqrt(pow((a - x_1), 2) + pow((b - y_1), 2)) < r && sqrt(pow((a - x_2), 2) + pow((b - y_2), 2)) > r) {
				answer++;
			}
			else if (sqrt(pow((a - x_1), 2) + pow((b - y_1), 2)) > r && sqrt(pow((a - x_2), 2) + pow((b - y_2), 2)) < r) {
				answer++;
			}								
		}
		cout << answer << '\n';
	}

	return 0;
}