#include<iostream>
#include<cstring>
#include<algorithm>

using namespace std;

int N;
string arr[50];

int compare(string a, string b) {
	if (a.length() != b.length()) {		
		return a.length() < b.length();
	}

	int asize = 0, bsize = 0;
	for (int i = 0; i < a.length(); i++) {
		if (a[i] >= '0' && a[i] <= '9') {
			asize += int(a[i]) - 48;
		}
		
		if (b[i] >= '0' && b[i] <= '9') {
			bsize += int(b[i]) - 48;
		}
	
	}
	if (asize != bsize) return asize < bsize;
	return a < b;
	
}
int main() {
	cin >> N;
	for (int i = 0; i < N; i++) {		
		cin >> arr[i];
	}

	sort(arr, arr + N, compare);
	for (int i = 0; i < N; i++) {
		cout << arr[i]<<'\n';
	}
	return 0;
}