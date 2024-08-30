#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
int N, student;
int Switch[101];

int main() {
	cin >> N;
	for (int i = 1; i <= N; i++) {
		cin >> Switch[i];
	}
	cin >> student;
	for (int i = 0; i < student; i++) {
		int gender, number;
		cin >> gender >> number;
		if (gender == 1) {
			for (int j = number; j <= N; j+=number) {
				if (Switch[j]) Switch[j] = 0;
				else Switch[j] = 1;
			}
		}
		else {						
			Switch[number] = !Switch[number];

			int j = 1;
			while (number - j > 0 && number + j <= N && Switch[number - j] == Switch[number + j]) {
				Switch[number - j] = !Switch[number - j];
				Switch[number + j] = !Switch[number + j];
				j++;
			}
		}
	}
	for (int i = 1; i <= N; i++) {
		cout << Switch[i] << " ";
		if (i % 20 == 0) cout << '\n';
	}
	return 0;
}