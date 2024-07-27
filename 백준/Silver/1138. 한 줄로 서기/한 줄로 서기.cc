#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int people[11];

int main() {
	int N;
	int left;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> left;
		for (int j = 0; j < N; j++) {
			if (left == 0 && people[j] == 0) {
				people[j] = i + 1;
				break;
			}
			else if(people[j] == 0) {
				left--;
			}
		}
	}
	for (int i = 0; i < N; i++) {
		cout << people[i]<< " ";
	}
	
	return 0;
}