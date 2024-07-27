#include<iostream>

using namespace std;

int main() {
	int N, min = 0, young = 0;
	cin >> N;
	for (int i = 0; i < N; i++) {
		int cost;
		cin >> cost;
		young += ((cost / 30)+1) * 10;
		min += ((cost / 60)+1) * 15;
	}
	if (young < min) {
		cout << "Y" << " " << young << endl;
	}
	else if (min < young) {
		cout << "M" << " " << min << endl;
	}
	else{
		cout << "Y" << " " << "M" <<" "<< min << endl;
	}
	return 0;
}