#include <iostream>

using namespace std;

int main() {

    string name, grade;
    double credit;

    double sumCredit = 0.0;
    double count;
    double res = 0.0;
    for (int i = 0; i < 20; i++) {
        cin >> name >> credit >> grade;
        if (grade == "P") continue;

        sumCredit += credit;
        if (grade == "F") continue;

        if (grade[0] == 'A') count = 4;
        else if (grade[0] == 'B') count = 3;
        else if (grade[0] == 'C') count = 2;
        else count = 1;

        if (grade[1] == '+') count += 0.5;

        res += credit * count;
    }

    cout << res / sumCredit;

    return 0;
}