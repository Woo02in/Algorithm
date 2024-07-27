#include<iostream>
#include<algorithm>
using namespace std;

int L, C;
char arr[16], code[4];

void dfs(int idx, int cnt, int vorel, int cons) {
	if (cnt == L && vorel >= 1 && cons >= 2) {
		for (int i = 0; i < L; i++) {
			cout << code[i];
		}
		cout << endl;
		return;
	}
	for (int i = idx; i < C; i++) {
		code[cnt] = arr[i];
		if (code[cnt] == 'a' || code[cnt] == 'e' || code[cnt] == 'i' || code[cnt] == 'o' || code[cnt] == 'u') {
			dfs(i + 1, cnt + 1, vorel + 1, cons);
		}
		else {
			dfs(i + 1, cnt + 1, vorel, cons + 1);
		}
	}

}
int main() {
	
	cin >> L >> C;
	for (int i = 0; i < C; i++) {
		cin >> arr[i];
	}
	sort(arr, arr + C);
	dfs(0,0,0,0);
	return 0;
}