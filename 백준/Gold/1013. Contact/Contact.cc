#include<iostream>
#include<algorithm>
#include<string>

using namespace std;



int main() {
	int T;
	cin >> T;
	for (int i = 0; i < T; i++) {
		string s;
		cin >> s;
		int idx = 0;
		bool flag = true;
		while (idx < s.size() && flag) {
			switch (s[idx]) {
			case '0':
				idx++;
				if (s.size() <= idx || s[idx] == '0') flag = false;
				idx++;
				break;

			case '1':
				idx++;
				int next_1 = s.find('1', idx);
				if (next_1 == string::npos || next_1 - idx < 2)
				{
					flag = false;
					break;
				}

				int next_0 = s.find('0', next_1);
				if (next_0 == s.size() - 1)
				{
					flag = false;
					break;
				}

				if (next_0 == std::string::npos)
				{
					idx = s.size();
					break;
				}
				idx = next_0;
				if ('0' == s[next_0 + 1] && 1 < next_0 - next_1)
					idx--;
				break;			
			}
		}
		cout << (idx == s.size() && flag ? "YES" : "NO") << '\n';
	
	}

	return 0;
}