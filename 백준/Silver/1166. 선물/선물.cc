#include<iostream>
#include<algorithm>
#include<vector>
#include<stdio.h>
typedef long long ll;

using namespace std;

double N, L, W, H;

int main() {

	cin >> N >> L >> W >> H;
	double left = 0, right = 1000000000, mid;
	for(int i =0;i<100000; i++) {
		mid = (left + right) / 2;
		if (((ll)(L / mid)) * ((ll)(W / mid)) * ((ll)(H / mid)) < N) right = mid;
		else left = mid;
	}
	printf("%.15lf", left);
	return 0;
}