#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
vector<int>v_1;
vector<int>v_2;


int main() {
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		int x; 
		cin >> x;
		v_1.push_back(x);
	}
	for (int i = 0; i < N; i++) {
		int y;
		cin >> y;
		v_2.push_back(y);
	}
	sort(v_1.begin(), v_1.end());
	sort(v_2.begin(), v_2.end());

	int sum = 0;
	for (int i = 0; i < N; i++) {
		sum += v_1[i] * v_2[N-1 - i];
	}
	cout << sum;
	return 0;
}