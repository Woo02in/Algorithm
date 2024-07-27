#include<iostream>

using namespace std;

int main() {
	int A, B, V, cnt = 0;
	cin >> A >> B >> V;
	if((V -B) % (A - B) ){
		cnt = (V - B) / (A - B) + 1;
	}
	else {
		cnt = (V - B) / (A - B);
	}
	
	cout << cnt << endl;
	return 0;
}