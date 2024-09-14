#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>
typedef long long ll;

using namespace std;

int N;
ll A[4001], B[4001], C[4001], D[4001], answer;
vector<ll> v;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> A[i] >> B[i] >> C[i] >> D[i];
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            v.push_back(A[i] + B[j]);
        }
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            ll sum = -(C[i] + D[j]);
            auto low = lower_bound(v.begin(), v.end(), sum);
            auto up = upper_bound(v.begin(), v.end(), sum);
            if (low != v.end() && *low == sum) {
                answer += distance(low, up);
            }
        }
    }
    cout << answer << '\n';
    return 0;
}
