#include<iostream>
#include<queue>
#include<string>
using namespace std;

int main() {
	int N;
	cin >> N;
	
	priority_queue<int,vector<int>, greater<int>> q;
	for (int i = 0; i < N; i++) {
		int x;
		cin >> x;		
		q.push(x);
	}
	if (N == 1) {
		cout << 0;
		return 0;
	}
	/*while (!q.empty()) {
		cout << q.top();
		q.pop();
	}*/
	int ans = 0;
	while(!q.empty()) {
		int sum = 0;
		int a = q.top();
		sum += a;
		q.pop();
		if (q.empty()) {
			ans += sum;
			break;
		}
		int b = q.top();
		sum += b;
		q.pop();				
		if (q.empty())
		{
			ans += sum;
			break;
		}
		ans += sum;
		q.push(sum);
		
	}
	cout << ans;
	return 0;
}