#define _CRT_SECURE_NO_WARNINGS
#include<iostream>

using namespace std;
int arr[9];
int main() {
	int sum = 0;
	for (int i = 0; i < 9; i++) {
		cin >> arr[i];
		sum += arr[i];
	}
	for (int i = 0; i < 8; i++) {
		for (int j = i + 1; j < 9; j++) {
			if (sum - arr[i] - arr[j] == 100) {
				for (int k = 0; k < 9; k++) {
					if (k != i && k != j) {
						cout << arr[k] << endl;
					}
				}
			}
		}
	}
	return 0;
}