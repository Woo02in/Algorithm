#include<iostream>
#include<cmath>
using namespace std;

int main() {
	int D, H, W;
	cin >> D >> H >> W;
	double x = sqrt((double)(D*D) / (double)(H*H + W * W));
	int h = floor(H * x);
	int w = floor(W * x);
	cout << h << " " << w << endl;

	return 0;
}