#include <iostream>
using namespace std;
int signal_strength[1001][1001], maxim;

class ROOM
{
public:
    int x;
    int y;
    int p;
};

int Effecting(int lhs_x, int lhs_y, int rhs_x, int rhs_y, int power)
{
    int signal = power - (abs(lhs_x - rhs_x) + abs(lhs_y - rhs_y));
    return (signal <= 0) ? 0 : signal;
}

int main()
{
    int N;    
    cin >> N;
    ROOM room[1001];

    for (int i = 0; i <= N; i++)
        cin >> room[i].x >> room[i].y >> room[i].p;

    for (int i = 1; i <= N; i++)
    {
        signal_strength[room[i].x][room[i].y] = Effecting(room[0].x, room[0].y, room[i].x, room[i].y, room[0].p);
        for (int j = 1; j <= N; j++)
        {
            if (signal_strength[room[i].x][room[i].y] <= 0) break;
            signal_strength[room[i].x][room[i].y] -= Effecting(room[j].x, room[j].y, room[i].x, room[i].y, room[j].p);
        }
    }

    for (int i = 1; i <= N; i++)
        if (maxim < signal_strength[room[i].x][room[i].y]) maxim = signal_strength[room[i].x][room[i].y];

    maxim == 0 ? cout << "IMPOSSIBLE\n" : cout << maxim << '\n';
}