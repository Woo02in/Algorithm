#include<iostream>

using namespace std;

int main() {
	int N, max_x = -10001, max_y = -10001, min_x = 10001, min_y = 10001;
	cin >> N;
	for (int i = 0; i < N; i++) {
		int x, y;
		cin >> x >> y;
		if (x > max_x)
			max_x = x;
		if (x < min_x)
			min_x = x;
		if (y > max_y)
			max_y = y;
		if (y < min_y)
			min_y = y;
	}
	/*cout << "max_x = " << max_x << endl;
	cout << "min_x = " << min_x << endl;
	cout << "max_y = " << max_y << endl;
	cout << "min_y = " << min_y << endl;*/
	cout << (max_x - min_x) * (max_y - min_y) << endl;

	return 0;
}