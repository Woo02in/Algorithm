#include<iostream>
#include<algorithm>
#include<vector>
#include<cstring>
#include<string>
#include<map>
using namespace std;

int N, M;
vector<string> poket;
map<string, int> m;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	cin >> N >> M;
	for (int i = 1; i <= N; i++) {
		string s;
		cin >> s;
		poket.push_back(s);
		m.insert({ s,i });
	}
	string question;
	for (int i = 0; i < M; i++) {		
		cin >> question;
		if (question[0]-'0'>=0 && question[0]-'0'<=9) {
			cout << poket[stoi(question)-1] << '\n';
		}
		else {						
			cout << m[question] << '\n';
		}
	}
	return 0;
}