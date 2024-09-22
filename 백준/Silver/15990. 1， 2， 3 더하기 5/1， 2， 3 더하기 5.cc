//#include<iostream>
//#include<algorithm>
//#include<vector>
//#include<string>
//
//using namespace std;
//
//int T;
//vector<string> answer;
//
//void backtracking(int num,int cur, string s) {
//	for (int i = 1; i <= 3; i++) {
//		if (s != "") {			
//			if (s[s.size() - 1]-48 == i) {				
//				continue;
//			}
//			cur += i;
//			s += to_string(i);
//			if (cur > num) {
//				cur -= i;
//				s.erase(s.size() - 1);
//				continue;
//			}
//			if (cur == num) {
//				answer.push_back(s);
//			}
//			
//
//		}
//		else {
//			cur += i;
//			s += to_string(i);
//		}
//		backtracking(num, cur, s);
//		cur -= i;
//		s.erase(s.size() - 1);
//
//	}
//}
//int main() {
//	ios::sync_with_stdio(0);
//	cin.tie(NULL);
//	cout.tie(NULL);
//	cin >> T;
//	while (T--) {
//		int n;
//		cin >> n;
//		backtracking(n, 0, "");
//		/*for (int i = 0; i < answer.size(); i++) {
//			cout << answer[i] << endl;
//		}*/
//		cout << answer.size()%1000000009 << '\n';
//		answer.clear();
//	}
//
//	return 0;
//}

#include<iostream>
#include<algorithm>
#include<vector>
typedef long long ll;

using namespace std;

int T, n;
ll dp[100001][4];

int main() {
	cin >> T;
	dp[1][1] = 1;
	dp[2][2] = 1;
	dp[3][1] = 1;
	dp[3][2] = 1;
	dp[3][3] = 1;

	for (int i = 4; i <= 100000; i++) {
		if (i - 1 >= 0) {
			dp[i][1] = (dp[i - 1][2] + dp[i - 1][3]) % 1000000009;
		}
		if (i - 2 >= 0) {
			dp[i][2] = (dp[i - 2][1] + dp[i - 2][3]) % 1000000009;
		}
		if (i - 3 >= 0) {
			dp[i][3] = (dp[i - 3][1] + dp[i - 3][2]) % 1000000009;
		}
	}
	while (T--) {
		cin >> n;
		cout << (dp[n][1] + dp[n][2] + dp[n][3]) % 1000000009 << '\n';
	}

	
	return 0;
}