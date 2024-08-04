#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>

using namespace std;
int N, S;
vector<int> v;
int tmp, cnt;

int main() {
	cin >> N >> S;	
	for (int i = 0; i < N; i++) {
		int x;
		cin >> x;
		v.push_back(x);		
	}
	int left = 0;
	int right = 0;
	int tmp = v[0];
	int answer = 987654321;

	while (left <= right && right < N) {		
		if(tmp < S) {
			tmp += v[++right];			
		}
		else {
			answer = min(answer, right - left + 1);
			tmp -= v[left];
			left++;
		}
	}
	if (answer == 987654321) answer = 0;
	cout << answer << '\n';
	return 0;
}