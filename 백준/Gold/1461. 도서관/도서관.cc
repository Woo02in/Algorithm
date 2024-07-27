#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>

using namespace std;
int N, M, ans;
vector<int> book_pos;
vector<int> book_neg;

int main() {
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		int x;
		cin >> x;
		if (x > 0) {
			book_pos.push_back(x);
		}
		else
			book_neg.push_back(-x);
	}
	sort(book_neg.begin(), book_neg.end());
	sort(book_pos.begin(), book_pos.end());
	for (int i = book_neg.size() - 1; i >= 0; i -= M) {
		ans += book_neg[i] * 2;
	}
	for (int i = book_pos.size() - 1; i >= 0; i -= M) {
		ans += book_pos[i] * 2;
	}
	if (book_neg.size() > 0 && book_pos.size() > 0) {
		if (book_neg[book_neg.size() - 1] > book_pos[book_pos.size() - 1]) {
			ans -= book_neg[book_neg.size() - 1];
		}
		else
			ans -= book_pos[book_pos.size() - 1];
	}
	else if(book_neg.size() > 0 && book_pos.size() == 0) {
		ans -= book_neg[book_neg.size() - 1];
	}
	else
		ans -= book_pos[book_pos.size() - 1];
	cout << ans << '\n';
	return 0;
}