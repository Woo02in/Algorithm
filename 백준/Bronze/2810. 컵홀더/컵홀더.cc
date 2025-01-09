#include<iostream>
#include<algorithm>
#include<string>

using namespace std;
char seat[51];
int people, answer;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int s = 0, l = 0;
	cin >> people;
	for (int i = 0; i < people; i++) {
		cin >> seat[i];
		if (seat[i] == 'S') {
			s++;
		}
		else l++;
	}
	l /= 2;
	if (s + l + 1 > people) answer = people;
	else answer = s + l + 1;
	cout << answer << '\n';
	return 0;
}