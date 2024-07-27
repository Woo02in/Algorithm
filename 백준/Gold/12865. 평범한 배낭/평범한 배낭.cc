#include<iostream>

using namespace std;


int max(int a, int b) {
	return a > b ? a : b;
}
int main() {
	int W[100];
	int V[100];
	int bag[100001] = {0,};
	int N, K;
	cin >> N >> K;
	for (int i = 0; i < N; i++) {
		cin >> W[i] >> V[i];
	}
	for (int i = 0; i < N; i++) {
		for (int j = K; j >= 0; j--) {
			if (j >= W[i]) {
				bag[j] = max(bag[j], bag[j - W[i]] + V[i]);
			}
		}
	}
	cout << bag[K]<<endl;

	return 0;
}