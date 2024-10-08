#include <iostream>
#include <algorithm>
using namespace std;

int vote[1000];

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int count = 0;
	int candidate;
	int dasom;

	

	cin >> candidate;
	cin >> dasom;

	for (int i = 0; i < candidate - 1; i++) {
		cin >> vote[i];
	}

	while (true) {
		int find_max = 0;
		int index = 0;
		for (int i = 0; i < candidate - 1; i++) {
			if (find_max < vote[i]) {
				find_max = vote[i];
				index = i;
			}
		}
		if (dasom > find_max) {
			cout << count << "\n";
			break;
		}
		
		dasom++;
		vote[index]--;
		count++;
	}

}
