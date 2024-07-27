#include<iostream>
#include<algorithm>
#include<vector>
#include<utility>
using namespace std;
int N, ans;
vector<int> v;

void binarysearch(int index, int temp) {	
	int left = 0, right = N - 1, sum;
	while (left < right) {
		sum = v[left] + v[right];
		if (sum == temp) {
			if (left != index && right != index) {
				ans++;
				break;
			}
			else if (left == index) left++;
			else if (right == index) right--;
		}
		else if (sum < temp) left++;
		else right--;
	}
}

int main() {	
	cin >> N;
	for (int i = 0; i < N; i++) {
		int x;
		cin >> x;
		v.push_back(x);		
	}
	sort(v.begin(), v.end());
	for (int i = 0; i < N; i++) {		
		binarysearch(i,v[i]);
	}
	cout << ans << '\n';
	return 0;
}