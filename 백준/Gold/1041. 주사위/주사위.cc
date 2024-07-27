#include<iostream>
#include<algorithm>
#include<vector>
#include<utility>
#include<cmath>

using namespace std;

long long N, onesurface, twosurface, threesurface;
long long a, b, c, d, e, f;
vector<pair<long long,long long>> dice;
long long answer = 0;

int main() {
	cin >> N;
	for (int i = 0; i < 6; i++) {
		int x;
		cin >> x;
		dice.push_back({ x,i });
	}
	sort(dice.begin(), dice.end());

	if (N == 1) {
		for (int i = 0; i < 5; i++) {
			answer += dice[i].first;			
		}
        cout << answer << endl;
		return 0;
	}
	twosurface += dice[0].first;
	threesurface += dice[0].first;
	int cnt = 0;
	for (int i = 1; i < 6; i++) {	
		if (cnt == 1) break;
		if (dice[0].second + dice[i].second == 5) continue;
		twosurface += dice[i].first;
		cnt++;
	}
	cnt = 0;
	for (int i = 1; i < 6; i++) {		
		if (cnt == 2) break;
		if ((dice[0].second + dice[i].second == 5)) continue;
		threesurface += dice[i].first;
		cnt++;
		for (int j = i + 1; j < 6; j++) {
			if ((dice[0].second + dice[j].second == 5) || (dice[i].second + dice[j].second == 5)) continue;
			threesurface += dice[j].first;			
			cnt++;		
			if (cnt == 2) break;
		}
	}

	
	answer += threesurface * 4;
	answer += twosurface * (8 * N - 12);
	answer += dice[0].first * (5 * pow(N, 2) - 16 * N + 12);
	//cout << twosurface << " " << threesurface;
	cout << answer << endl;
	return 0;
}
//
//af
//be
//cd
//
//aed
//aec
//abd
//abc
//bfd
//bfc
//efd
//efc
//
//2 -> 3면 4개
//3 -> 3면 4개 , 2개 12 (4*2)개, 1개 6(5*4)개
//4 -> 3면 4개 , 2개 24 (8*2)개, 1개 24(5*8)개
//5 -> 3면 4개 , 2개 36 (12*2)개, 1개 54(5*12)개
//
//
//n 3면 8개, 2면 4*(n-2)개, 1면 6*((n-2)^2)개
//
//10000000000000