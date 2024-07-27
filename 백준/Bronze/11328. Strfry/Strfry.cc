#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main() {
	string s, s_1;
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> s >> s_1;
		bool flag = true;
		sort(s.begin(), s.end());
		sort(s_1.begin(), s_1.end());
		for (int j = 0; j < s.size(); j++) {
			if (s[j] != s_1[j]) {
				flag = false;
				break;
			}
		}
		if (flag)
			cout << "Possible" << endl;
		else
			cout << "Impossible" << endl;
	}
	return 0;
}