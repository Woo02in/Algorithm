#include<iostream>
#include<algorithm>	
using namespace std;

int N, answer;
int book[300001];

int main() {
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> book[i];
	}
	int cnt = N;
	for (int i = N-1; i >=0 ; i--) {		
		if (book[i] == cnt) {
			cnt--;
		}
	}
	cout << cnt << '\n';
	return 0;
}

