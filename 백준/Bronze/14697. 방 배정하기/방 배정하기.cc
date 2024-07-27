#include <iostream>
using namespace std;
 
int main()
{
    int b[3], n;
    for (int i = 0; i < 3; ++i) {
        cin >> b[i];
    } cin >> n;
 
    for (int i = 0; i <= n / b[2]; i++) {
        int c = i * b[2];
        for (int j = 0; j <= n / b[1]; j++) {
            int c2 = c + j * b[1];
            for (int k = 0; k <= n / b[0]; k++) {
                int c3 = c2 + k * b[0];
                if (c3 == n) {
                    cout << 1;
                    return 0;
                }
            }
        }
    }
    cout << 0;
 
    return 0;
}