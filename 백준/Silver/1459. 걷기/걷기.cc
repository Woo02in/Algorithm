#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

long long X, Y, W, S;
long long answer;

int main() {
	long long curx = 0, cury = 0;
	int rule = 0;
	cin >> X >> Y >> W >> S;
	if (X > Y) {
		swap(X, Y);
	}
	answer = min( min((X + Y) * W , X * S + (Y - X) * W), X * S + (Y - X) / 2 * 2 * S + (Y - X) % 2 * W);


	cout << answer << endl;
	return 0;
}

