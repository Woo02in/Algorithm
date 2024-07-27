#include <iostream>
#include <string>
using namespace std;
int main() {
    string n;
    int ans = 0;
    cin >> n;
    for (int i = 0; i < n.size(); i++)
    {
        if (n[i] == '1')
        {
            if (i + 1 < n.size())
            {
                if (n[i + 1] == '0')
                {
                    ans += 10;
                    i++;
                }
                else
                    ans += n[i] - '0';
            }
            else
                ans += n[i] - '0';
        }
        else
            ans += n[i] - '0';
    }
    cout << ans << '\n';
}