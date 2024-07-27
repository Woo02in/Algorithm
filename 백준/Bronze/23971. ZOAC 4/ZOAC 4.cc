#include<iostream>

using namespace std;
int H, W, N, M;
int main() {
	int answer = 0;
	cin >> H >> W >> N >> M;
	for (int i = 0; i < H; i += N+1) {
		for (int j = 0; j < W; j += M+1) {
			answer++;
		}
	}
	cout << answer<<endl;
	return 0;
}