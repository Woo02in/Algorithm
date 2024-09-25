#include <iostream>
#include <iostream>
#include <map>
#include <cstring>
using namespace std;
int N, M, cnt = 0;
string s;
map<string, int> m;
map<string, int>::iterator iter;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);    

    cin >> N >> M;
    for (int i = 0; i < N + M; i++) {
        cin >> s;
        m[s]++;
        if (m[s] == 2) cnt++;
    }
    cout << cnt << '\n';
    for (iter = m.begin(); iter != m.end(); iter++)
        if (iter->second == 2)
            cout << iter->first << '\n';
    return 0;
}