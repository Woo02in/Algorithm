#include<iostream>
#include <vector>
#include <algorithm>

using namespace std;
int N, book[200000];
vector<int> v;

int main() {
    cin >> N;
    for (int i = 0; i < N; i++)
        cin >> book[i];
    v.push_back(book[0]);

    for (int i = 1; i < N; i++) {
        auto idx = lower_bound(v.begin(), v.end(), book[i]) - v.begin();

        if (idx < v.size()) {
            v[idx] = book[i];
            /*for (int j = 0; j < v.size(); j++) {
                cout << v[j] << " ";
            }
            cout << endl;*/
        }
        else {
            v.push_back(book[i]);
            /*for (int j = 0; j < v.size(); j++) {
                cout << v[j] << " ";
            }
            cout << endl;*/
        }
    }
    cout << N - v.size() << '\n';
}