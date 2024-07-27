#include<iostream>

using namespace std;

int main() {
	int N, M;
	cin >> N >> M;
	int ball[101] = { 0, };
	for (int i = 0; i < M; i++) {
		int a, b, c;
		cin >> a >> b >> c;
		for (int i = a; i <= b; i++) {
			ball[i-1] = c;
		}
	}
	for (int i = 0; i < N; i++) {
		cout << ball[i]<< " ";
	}
	return 0;
}

