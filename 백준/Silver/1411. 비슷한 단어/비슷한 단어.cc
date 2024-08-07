#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<string> words(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> words[i];
    }

    int cnt(0);
    for (int i = 1; i < n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            if (words[i].size() != words[j].size())
            {
                continue;
            }

            bool flag = false;
            int visited1[27]{ 0, }, visited2[27]{ 0, };
            for (int k = 0; k < words[i].length(); k++)
            {
                int idx1 = words[i][k] - 'a' + 1;
                int idx2 = words[j][k] - 'a' + 1;
                if (!visited1[idx1] && !visited2[idx2])
                {
                    visited1[idx1] = idx2;
                    visited2[idx2] = idx1;
                }
                else if(visited1[idx1] != idx2)
                {
                    flag = true;
                }
            }
            if (flag == false)
            {
                cnt++;
            }
        }
    }
    cout << cnt << '\n';

    return 0;
}