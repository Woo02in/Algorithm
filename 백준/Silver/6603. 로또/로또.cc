#include<iostream>

using namespace std;

int k, arr[13], lotto[6];


void dfs(int idx, int cnt) {
	if (cnt == 6) {
		for (int i = 0; i < 6; i++)
			cout << lotto[i] << " ";
		cout << "\n";
		return;
	}

	for (int i = idx; i < k; i++) {
		lotto[cnt] = arr[i];
		dfs(i+ 1, cnt + 1);
	}
}

int main()
{
	while (cin >> k && k != 0) {
		for (int i = 0; i < k; i++) {
			cin >> arr[i];
		}
		dfs(0, 0);
		cout << "\n";
	}

	return 0;
}