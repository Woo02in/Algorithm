#include <iostream>
#include <queue>
using namespace std;
int main() {
    int count=0;
    int test_case;
    cin >> test_case;
    int N, M,x;
    for (int i = 0; i < test_case; ++i) {
        count = 0;
        cin >> N >> M;
        queue<pair<int, int>> q;
        priority_queue<int> pq; 
        for (int j = 0; j < N; ++j) {
            cin >> x;
            q.push({ j, x });
            pq.push(x);
        }
        while (!q.empty()) {
            int index = q.front().first;
            int value = q.front().second;
            q.pop();
            if (pq.top() == value) {
                pq.pop();
                ++count;
                if (index == M) {
                    cout << count << endl;
                    break;
                }
            }
            else q.push({ index,value });
        }
    }
}