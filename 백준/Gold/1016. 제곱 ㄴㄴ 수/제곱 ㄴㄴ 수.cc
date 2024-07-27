#include<iostream>
#include<algorithm>

using namespace std;

long long answer[1000001];

int main() {
	long long min, max;
	int cnt = 0;
	cin >> min >> max;

	for (long long i = 2; i * i <= max; i++) {		
		long long n = min/(i * i);
		if (min % (i * i) != 0)
			n++;
		while (n * i * i <= max) {
			answer[n * i * i - min] = 1;
			n++;
		}
		
		
	}
	for (long long i = 0; i <= max - min; i++) {
		if (!answer[i]) {
			cnt++;
			//cout << i+min << endl;
		}
		
	}
	cout << cnt << endl;
	return 0;
}