#include<iostream>

using namespace std;

int main() {
	bool flag = true;
	int arr[8] = { 0, };
	for (int i = 0; i < 8; i++) {
		cin >> arr[i];
	}
	if (arr[0] == 1) {
		for (int i = 1; i < 8; i++) {
			if (arr[i] - arr[i - 1] != 1) {
				cout << "mixed";
				flag = false;
				break;
			}
		}
		if (flag) {
			cout << "ascending";
		}
	}
	else if (arr[0] == 8) {
		for (int i = 1; i < 8; i++) {
			if(arr[i] - arr[i-1] != -1){
				cout << "mixed";
				flag = false;
				break;
			}
		}
		if (flag) {
			cout << "descending";
		}
	}
	else {
		cout << "mixed";
	}
	return 0;
}