#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<queue>

using namespace std;

int n;
int main() {
	int T;
	scanf("%d", &T);
	priority_queue<int, vector<int>,greater<int>>pq;

	for (int i = 0; i < T; i++) {
		scanf("%d", &n);
		if (n == 0) {
			if (pq.empty()) {
				printf("0\n");
			}
			else {
				printf("%d\n", pq.top());
				pq.pop();
			}
		}
		else {
			pq.push(n);
		}
	}

	return 0;
}