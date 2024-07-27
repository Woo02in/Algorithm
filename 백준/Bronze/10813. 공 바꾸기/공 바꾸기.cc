#include<iostream>

using namespace std;

int main() {
	int N, M;
	cin >> N >> M;
	int ball[101] = { 0, };
	for (int i = 0; i < N; i++) {
		ball[i] = i+1;
	}
	for (int i = 0; i < M; i++) {
		int a, b, index = 0;
		cin >> a >> b;
		index = ball[a-1];
		ball[a-1] = ball[b-1];
		ball[b-1] = index;
	}
	for (int i = 0; i < N; i++) {
		cout << ball[i] << " ";
	}
	return 0;
}

//1 2 3 4 5
//2 1 3 4 5
//2 1 4 3 5
//3 1 4 2 5

