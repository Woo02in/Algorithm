#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    int n, k, cnt = 0, sw;

    cin >> n >> k;
    cin >> s;

    for (int i = 0; i < n; i++) {
        if (s[i] != 'P') continue;

        for (int j = i - k; j <= i + k; j++) {
            if (0 <= j && j < n && s[j] == 'H') {
                s[j] = 'D';
                cnt++;
                break;
            }
        }
    }

    cout << cnt;
}