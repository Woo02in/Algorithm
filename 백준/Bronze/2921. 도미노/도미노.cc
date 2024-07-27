#include <iostream>

using namespace std;

int main()
{
    int n, a = 3, b = 6, ans = 0;
    
    cin >> n;
    
    for (int i = 0; i < n; i++)
    {
        ans += a;
        a = a + b;
        b += 3;
    }
    
    cout << ans;
    return 0;
}