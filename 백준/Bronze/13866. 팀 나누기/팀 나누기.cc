#include<iostream>
#include<algorithm>
#include<stdlib.h>
using namespace std;

int main() {
	int arr[4] = { 0, };
	for (int i = 0; i < 4; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + 4);
	cout << abs((arr[1] + arr[2]) - (arr[0] + arr[3]));
	return 0;
}