//20:25

#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
int K;
vector<string> s(4);
int num, d, dir[4], answer;

//void clockdir(string S, int direct) {
//	if (direct == 1) {
//		char a = S[7];
//		for (int i = 1; i <= 7; i++) {
//			S[i] = S[i - 1];
//		}
//		S[7] = a;
//	}
//	else if (direct == -1) {
//		char a = S[0];
//		for (int i = 0; i < 7; i++) {
//			S[i] = S[i + 1];
//		}
//		S[7] = a;
//	}
//}

int main() {
	string ss;
	for (int i = 0; i < 4; i++) {
		cin >> ss;
		s[i] = ss;
	}	
	cin >> K;
	
	for (int Z = 0; Z < K; Z++) {
		bool flag[4] = { false, };
		cin >> num >> d;
		if (num % 2 == 0) {
			dir[1] = d;
			dir[3] = d;
			dir[0] = -d;
			dir[2] = -d;
		}
		else {
			dir[1] = -d;
			dir[3] = -d;
			dir[0] = d;
			dir[2] = d;
		}
		if (num == 1) {
			flag[num - 1] = true;
			for (int p = num - 1; p < 3; p++) {
				if (s[p][2] == s[p+1][6]) {
					break;
				}
				else {
					flag[p + 1] = true;
				}
			}
		}
		else if (num == 4) {
			flag[num - 1] = true;
			for (int p = num - 1; p > 0; p--) {
				if (s[p][6] == s[p - 1][2]) {
					break;
				}
				else {
					flag[p - 1] = true;
				}
			}
		}
		else {
			flag[num - 1] = true;
			for (int p = num - 1; p < 3; p++) {
				if (s[p][2] == s[p + 1][6]) {
					break;
				}
				else {
					flag[p + 1] = true;
				}
			}
			for (int p = num - 1; p > 0; p--) {
				if (s[p][6] == s[p - 1][2]) {
					break;
				}
				else {
					flag[p - 1] = true;
				}
			}
		}
		for (int q = 0; q < 4; q++) {
			if (flag[q]) {
				//cout << s[q] << " " << dir[q];
				//clockdir(s[q], dir[q]);
				if (dir[q] == 1) {
					char a = s[q][7];
					for (int i = 7; i >0 ; i--) {
						s[q][i] = s[q][i - 1];
					}
					s[q][0] = a;
				}
				else if (dir[q] == -1) {
					char a = s[q][0];
					for (int i = 0; i < 7; i++) {
						s[q][i] = s[q][i + 1];
					}
					s[q][7] = a;
				}
			}
		}
		/*for (int i = 0; i < 4; i++) {
			cout << s[i] << endl;
		}*/

		/*for (int j = 0; j < 4; j++) {
			cout << flag[j] << endl;
		}*/
	}
	/*for (int i = 0; i < 4; i++) {
		cout << s[i][0] << endl;
	}*/
	if (s[0][0] == '1') answer += 1;
	if (s[1][0] == '1') answer += 2;
	if (s[2][0] == '1') answer += 4;
	if (s[3][0] == '1') answer += 8;
	cout << answer;
	return 0;
}
