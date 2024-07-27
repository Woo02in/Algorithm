#include<iostream>
#include<vector>
#include<math.h>
#include<algorithm>
using namespace std;

vector<int> v;
int main() {
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		int a, b, c, big, mid, small;
		cin >> a >> b >> c;
		if (a >= b && a>=c ) {
			if (b >= c) {
				big = a;
				mid = b; 
				small = c;
			}
			else {
				big = a;
				mid = c;
				small = b;
			}
		}
		else if (b >= a && b>=c) {
			if (a >= c) {
				big = b;
				mid = a;
				small = c;
			}
			else {
				big = b;
				mid = c;
				small = a;
			}
		}
		else if (c >= b && c>=a) {
			if (b >= a) {
				big = c;
				mid = b;
				small = a;
			}
			else {
				big = c;
				mid = a;
				small = a;
			}
		}
		if (big != mid && big != small && mid != small) {
			v.push_back(100 * big);
		}
		else if (big == mid && mid != small) {
			v.push_back(1000 + (big * 100));
		}
		else if (big != mid && mid == small) {
			v.push_back(1000 + (mid * 100));
		}
		else if (big == mid && mid == small) {
			v.push_back(10000 + (big * 1000));
		}
	}
	sort(v.begin(), v.end());
	cout << v[N - 1];
	return 0;
}