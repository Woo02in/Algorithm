//17:31

#include<iostream>
#include<algorithm>
#include<vector>
#include<string>

using namespace std;
string S, T;
int answer;

int main() {
	cin >> S >> T;
	while (true) {		
		if (S.size() == T.size()) {
			if (S == T) answer = 1;
			break;
		}
		if (T[T.size() - 1] == 'A')
			T.pop_back();
		else {
			T.pop_back();
			reverse(T.begin(), T.end());
		}
	}
	cout << answer<<'\n';
	

	return 0;
}