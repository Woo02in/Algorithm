#include<iostream>

using namespace std;
int L, P, V;
int main() {
    int cnt = 1;
	while (true) {
		
		int answer = 0;
		cin >> L >> P >> V;
		if (L == 0 && P == 0 && V == 0) {
			break;
		}
		answer += V / P * L;
		if (V % P < L) {
			answer += V % P;
		}
		else {
			answer += L;
		}
		cout << "Case " << cnt << ": " << answer << endl;
		cnt++;
	}

	return 0;
}