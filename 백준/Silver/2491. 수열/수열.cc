#include<iostream>
#include<algorithm>

using namespace std;

int N;
int arr[100001];

int main(){
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N;
	for(int i =1;i<=N; i++){
		cin >> arr[i];
	}
		
	int answer = 1;
	int len = 1;
	int len2 = 1;
	for(int i =1; i<N; i++){
		if (arr[i] <= arr[i + 1]) {
			len++;
		}
		else len = 1;

		if (arr[i] >= arr[i + 1]) len2++;
		else len2 =1;

		int result = max(len, len2);
		answer = max(answer, result);
	}
	cout << answer << '\n';

	return 0;
}
