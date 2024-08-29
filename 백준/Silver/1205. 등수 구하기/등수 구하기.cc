#include<iostream>
#include<algorithm>
#include<map>

using namespace std;
int N, score, P;
int list[101];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);

	int cnt = 1;
	cin >> N >> score >> P;
	
	for (int i = 0; i < N; i++) {
		cin >> list[i];		
	}

	int count = 0;
	int rank = 1;
	for (int i = 0; i < N; i++) {
		if (list[i] > score) {
			rank++;
		}
		else if (list[i] == score) {
			rank = rank;
		}
		else {
			break;
		}
		count++;
	}
	if (count == P) {
		rank = -1;

	}
	if (N == 0) {
		rank = 1;
	}
	cout << rank<< '\n';
	return 0;
}