#include<iostream>
#include<queue>
#include<utility>
#include<algorithm>
#include<stack>

using namespace std;

long long n;
long long histogram[100001];
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	while (true) {
		cin >> n;
		if (n == 0)
			break;	
		
		for (int i = 0; i < n; i++) {
			cin >> histogram[i];
		}		
        histogram[n]=-1;
		stack<int> s;
		long long answer = 0;
		for (int i = 0; i <= n; i++) {
			while (!s.empty() && histogram[i] <= histogram[s.top()]) {
				int height, width;
				height = s.top();
				s.pop();

				if (s.empty())
					width = i;
				else
					width = i - s.top()-1;

				answer = max(answer, histogram[height] * width);				
			}
			s.push(i);
		}
		cout << answer << endl;
	}

	return 0;
}
