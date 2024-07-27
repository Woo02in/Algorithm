#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	int N, snakelen;
	int apple[1000] = { 0, };
	cin >> N >> snakelen;
	for (int i = 0; i < N; i++) {
		cin >> apple[i];
	}
	sort(apple, apple + N);

	for (int i = 0; i < N; i++) {
		if (apple[i] <= snakelen) {
			snakelen++;
		}
		else {
			break;
		}
	}
	cout << snakelen;
	return 0;
}