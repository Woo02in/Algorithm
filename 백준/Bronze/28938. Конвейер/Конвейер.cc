#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int n;
int main() {
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n;
	int position = 0;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		position += x;
	}
	if (position < 0) {
		cout << "Left" << '\n';
	}
	else if (position > 0) {
		cout << "Right" << '\n';
	}
	else cout << "Stay" << '\n';
	return 0;
}