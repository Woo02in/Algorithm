#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>

using namespace std;

int find_g(int arr[], int x) {
	if (x != arr[x]) return arr[x] = find_g(arr, arr[x]);
	else return arr[x];
}

void merge(int arr[], int x, int y) {
	int px = find_g(arr, arr[x]);
	int py = find_g(arr, arr[y]);
	if (px != py) {
		if (px < py) arr[py] = arr[px];
		else arr[px] = arr[py];
	}
}
int main() {
	int N, M, knowtrue;
	int group[51], party[51][51];
	vector<int> partycount;
	cin >> N >> M;
	cin >> knowtrue;
	for (int i = 0; i <= N; i++) {
		group[i] = i;
	}
	int knowperson;
	for (int i = 0; i < knowtrue; i++) {
		cin >> knowperson;
		group[knowperson] = 0;
	}

	int count = 0, person;
	for (int i = 0; i < M; i++) {
		cin >> count;
		cin >> person;
		partycount.push_back(count);
		party[i][0] = person;
		for (int j = 1; j < count; j++) {
			cin >> person;
			party[i][j] = person;
			merge(group, party[i][0], person);
		}
	}
	int answer = M;

	for (int i = 0; i < M; i++) {
		for (int j = 0; j < partycount[i]; j++) {
			if (find_g(group, group[party[i][j]]) == 0) {
				answer--;
				break;
			}
		}
	}
	cout << answer << endl;
	return 0;
}