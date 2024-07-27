#include<stdio.h>
#include<algorithm>

using namespace std;

int main() {
	int arr[10] = { 0, }, copy[1000] = {0,}, count[1000] = { 0, };
	int sum= 0;
	for (int i = 0; i < 10; i++) {
		scanf("%d", &arr[i]);
		sum += arr[i];
		count[arr[i]]++;
		copy[arr[i]]++;
	}
	sort(arr, arr + 10);
	sort(count, count + 1000);
	for (int i = 0; i < arr[9]; i += 10) {
		if (count[999] == copy[i]) {
			printf("%d\n%d", sum / 10, i);
			break;
		}
	}
	
	return 0;
}