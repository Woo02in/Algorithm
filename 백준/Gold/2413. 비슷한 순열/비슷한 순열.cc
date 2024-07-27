#include<iostream>
using namespace std;


int arr[50001];
int check[50001];
bool vis[50001];
int main() {
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
		check[i + 1] = i + 1;
	}

	for (int i = 0; i < N; i++) {
		int now = arr[i];
		if (check[now] == now + 1) {
			vis[now] = true;
			cout << now + 1 << " ";
		}
		else if (now != 1 && check[now] == now && check[now - 1] == now - 1 && !vis[now] && !vis[now - 1]) {
			vis[now - 1] = true;
			cout << now - 1 << " ";
			swap(check[now], check[now - 1]);
		}
		else {
			vis[now] = true;
			cout << now << " ";
		}
	}
	return 0;
}