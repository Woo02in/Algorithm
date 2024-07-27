#include<iostream>

using namespace std;
long long room[1000001];
int main() {
	long long answer = 0;
	long long room_cnt, Tmaster, tmaster;
	cin >> room_cnt;
	for (int i = 0; i < room_cnt; i++) {
		cin >> room[i];
	}
	cin >> Tmaster >> tmaster;
	for (int i = 0; i < room_cnt; i++) {
		if (room[i] > Tmaster) {
			answer++;
			long long stu = room[i] - Tmaster;
			if ((stu % tmaster) == 0) {
				answer += stu / tmaster;
			}
			else answer += (stu / tmaster) + 1;
		}
		else {
			answer++;
		}
	}
	cout << answer;
	return 0;
}