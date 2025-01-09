#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int A, B;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	cin >> A >> B;
	string a, b;
	a = to_string(A);
	b = to_string(B);
	string MaxA = a, MinA = a, MaxB = b, MinB = b;
	for (int i = 0; i < a.length(); i++) {		
		if (a[i] == '5') {
			MaxA[i] = '6';
		}
		if (a[i] == '6') {
			MinA[i] = '5';
		}
	}
	//cout << MaxA << " " << MinA << endl;
	for (int i = 0; i < b.length(); i++) {
		if (b[i] == '5') {
			MaxB[i] = '6';
		}
		if (b[i] == '6') {
			MinB[i] = '5';
		}
	}
	int answerA = 0, answerB = 0;
	answerA = stoi(MaxA) + stoi(MaxB);
	answerB = stoi(MinA) + stoi(MinB);
	cout << answerB << " " << answerA << '\n';
	return 0;
}