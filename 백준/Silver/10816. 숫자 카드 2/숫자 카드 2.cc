#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
	int n, m;
	cin >> n;
	vector<int> sangcard;
	int getnum;
	for (int i = 0; i < n; i++) {
		cin >> getnum;
		sangcard.push_back(getnum);
	}
	cin >> m;
	vector<int>findcard;
	for (int i = 0; i < m; i++) {
		cin >> getnum;
		findcard.push_back(getnum);
	}

	unordered_map<int, int> cardCount;
	for (int i = 0; i < sangcard.size(); i++) {
		cardCount[sangcard[i]]++;
	}
	/*for (int i = 0; i < sangcard.size(); i++) {
		cout << cardCount[i] << " ";
	}
	cout << endl;*/
	for (int i = 0; i < findcard.size(); i++) {
		cout << cardCount[findcard[i]] << ' ';
	}
}