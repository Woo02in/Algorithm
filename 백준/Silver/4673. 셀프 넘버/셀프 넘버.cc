#include<iostream>
#include<algorithm>

using namespace std;

int arr[10001];
int main() {
	for (int i = 1; i <= 10000; i++) {
	
		int x = i;
		int num = i;
		while (1) {
			if (x == 0) {
				break;
			}
			num += x % 10;;
			x /= 10;
		}
		arr[num] = 1;
		if (arr[i] == 1) {
			continue;
		}
		else {
			cout << i << endl;
		}
	}
	return 0;
}