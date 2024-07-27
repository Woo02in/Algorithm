//19:12
#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
#include<utility>
using namespace std;
int N, answer;
//vector<pair<string,int>> car_before;
vector<string> car_before;
vector<int> ans;
int main() {
	cin >> N;
	string s;
	for (int i = 0; i < N; i++) {
		cin >> s;
		car_before.push_back(s);
	}
	for (int i = 0; i < N; i++) {
		cin >> s;
		int order = find(car_before.begin(), car_before.end(), s) - car_before.begin();
		ans.push_back(order);		
		//cout << car_before[i];
		//cout << order << endl;
	}
	int tmp = 0;
	for (int i = 0; i < ans.size(); i++) {		
		int a = find(ans.begin(), ans.end(), i) - ans.begin();
		//cout << a << endl;		
		if (tmp > a) continue;
		if (i == 0)
			answer += a- tmp;
		else {
			if (tmp == ans.size() - 1) {
				//answer += a - tmp - 1;
				break;
			}
			answer += a - tmp - 1;
		}			
		tmp = a;		
		//cout << tmp << endl;
	}
	
	cout << answer << '\n';
	return 0;
}

//0 1 2 3 4 5 6 7 8 9
//0 6 2 3 4 5 1 7 8 9

//

// 0 1 2 3
// 3 0 2 1