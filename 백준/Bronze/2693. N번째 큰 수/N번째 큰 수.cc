#include<iostream>
#include<algorithm>

using namespace std;

int main() {
	int Test;
	cin >> Test;
	for (int q = 0; q < Test; q++) {
		int arr[10];
		for (int i = 0; i < 10; i++) {
			cin >> arr[i];
		}
		sort(arr, arr + 10);
		cout << arr[7] << endl;
	}

	return 0;
}