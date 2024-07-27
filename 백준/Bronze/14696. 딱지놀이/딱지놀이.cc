#include<iostream>

using namespace std;
int A, B;
int x;
int main() {
	int Test;
	cin >> Test;
	while (Test--) {
		int card_A[5] = {0,};
		int card_B[5] = {0,};
		cin >> A;
		for (int i = 0; i < A; i++) {
			cin >> x;
			card_A[x]++;
		}
		cin >> B;
		for (int i = 0; i < B; i++) {
			cin >> x;
			card_B[x]++;
		}
		if (card_A[4] > card_B[4]) {
			cout << "A" << endl;
		}
		else if(card_A[4] < card_B[4]){
			cout << "B" << endl;
		}
		else {
			if (card_A[3] > card_B[3]) {
				cout << "A" << endl;
			}
			else if (card_A[3] < card_B[3]) {
				cout << "B" << endl;
			}
			else {
				if (card_A[2] > card_B[2]) {
					cout << "A" << endl;
				}
				else if (card_A[2] < card_B[2]) {
					cout << "B" << endl;
				}
				else {
					if (card_A[1] > card_B[1]) {
						cout << "A" << endl;
					}
					else if (card_A[1] < card_B[1]) {
						cout << "B" << endl;
					}
					else {
						cout << "D" << endl;
					}
				}
			}
		}


	}

	return 0;
}