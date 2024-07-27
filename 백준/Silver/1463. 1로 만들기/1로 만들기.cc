#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;
int DP[1000001];
int Min(int a, int b) 
{ 
	return a < b ? a : b; 
}
int main() {

	int N;
	
	cin >> N;
	DP[1] = 0;
	for (int i = 2; i <= N; i++) {
		DP[i] = DP[i - 1] + 1;
		if (i % 2 == 0)
			DP[i] = Min(DP[i],DP[i / 2] + 1);
		if (i % 3 == 0)
			DP[i] = Min(DP[i], DP[i / 3] + 1);
	}
	cout << DP[N]<<endl;
	return 0;
}