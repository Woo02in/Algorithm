#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main() {
	string a;
	string b;
	int sum = 0;
	cin >> a >> b;
	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());
	int x = stoi(a);
	int y = stoi(b);
	sum = x + y;

	string c;
	c = to_string(sum);
	reverse(c.begin(), c.end());
	
	int ans = stoi(c);
	cout << ans;

	return 0;
}