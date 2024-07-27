#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;
char arr[9][9];
int main() {
	int count = 0;
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			cin >> arr[i][j];
		}
	}
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if (i % 2 == 0 && j % 2 == 0) {
				if (arr[i][j] == 'F') {
					count++;
				}
			}
			if (i % 2 == 1 && j % 2 == 1) {
				if (arr[i][j] == 'F') {
					count++;
				}
			}
		}
	}
	cout << count;
	return 0;
}