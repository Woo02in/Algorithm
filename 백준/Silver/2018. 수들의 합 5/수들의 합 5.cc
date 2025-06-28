#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    int count = 0;

    for (int k = 1; k * (k + 1) / 2 <= N; k++) {
        int numerator = N - k * (k - 1) / 2;
        if (numerator % k == 0) {            
            count++;
        }
    }

    cout << count << '\n';
    return 0;
}