#include <iostream>
#include <cstring>

using namespace std;

int main() {    
    int N, index = 0;
    long long arr[1023], tmp;
    cin >> N;

    if (N > 1023) {
        cout << "-1\n";
        return 0;
    }

    for (int i = 0; i <= 9; i++)
        arr[index++] = i;

    for (int i = 1; i < 1022; i++) {
        tmp = arr[i];

        for (int j = 0; j <= 9; j++) {
            if (tmp % 10 > j)
                arr[index++] = tmp * 10 + j;
        }
    }

    cout << arr[N - 1] << "\n";

    return 0;
}