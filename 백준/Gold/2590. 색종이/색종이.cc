//#include<iostream>
//
//using namespace std;
//
//int main() {
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	int one, two, three, four, five, six;
//	cin >> one >> two >> three >> four >> five >> six;
//	int cnt = 0;
//	cnt += six;	
//	int square;
//	while (one!=0 ||two!=0 || three!= 0 ||four!=0 ||five!=0) {		
//		while (five > 0) {
//			square = 36;
//			five--;
//			if (one <= square)
//				one = 0;
//			else one -= square;
//			cnt++;
//		}
//		while (four > 0) {
//			square = 36;
//			four--;
//			if (two > 5) {
//				two -= 5;
//				square -= 20;
//			}
//			else {
//				square -= 4 * two;
//				two = 0;
//			}
//			if (one <= square)one -= square;
//			cnt++;
//		}
//		while (three > 0) {
//			square = 36;
//			if (three > 4) {
//				three -= 4;
//				square = 0;
//			}
//			else {
//				square -= 9 * three;
//				three = 0;
//			}
//			if (square == 27 && two > 5) {
//				two -= 5;
//				square -= 20;
//			}
//			else if (square == 27 && two <= 5) {
//				square -= 4 * two;
//				two = 0;
//			}
//			if (square == 18 && two > 3) {
//				two -= 3;
//				square -= 12;
//			}
//			else if (square == 18 && two <= 3) {
//				square -= 4 * two;
//				two = 0;
//			}
//			if (square == 9 && two >= 1) {
//				square -= 4 * two;
//				two = 0;
//			}
//			if (one <= square) one = 0;
//			else one -= square;
//			cnt++;
//		}
//		while (two > 8) {
//			int square = 36;
//			if (two > 9)
//			{
//				two -= 9;
//				square = 0;
//			}
//			else
//			{
//				square -= 4 * two;
//				two = 0;
//			}
//			if (one <= square)
//				one = 0;
//			else
//				one -= square;
//			cnt++;
//		}
//		while (one > 0) {
//			if (one > 36) one -= 36;
//			else one = 0;
//			cnt++;
//		}
//	}
//	cout << cnt << '\n';
//	return 0;
//}

#include<iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int one, two, three, four, five, six;
    cin >> one >> two >> three >> four >> five >> six;
    int cnt = 0;

    cnt += six;

    cnt += five;
    one -= 11 * five;

    cnt += four;
    int space_left_for_two = 20 * four;
    if (4*two > space_left_for_two) {
        two -= space_left_for_two/4;
    }
    else {
        int remaining_space = space_left_for_two - 4 * two;
        one -= remaining_space;
        two = 0;
    }

    cnt += (three + 3) / 4;
    int remaining_three = three % 4;

    if (remaining_three == 1) {
        if (two >= 5) {
            two -= 5;
            one -= 7;
        }
        else {
            one -= (27 - 4 * two);
            two = 0;
        }
    }
    else if (remaining_three == 2) {
        if (two >= 3) {
            two -= 3;
            one -= 6;
        }
        else {
            one -= (18 - 4 * two);
            two = 0;
        }
    }
    else if (remaining_three == 3) {
        if (two >= 1) {
            two -= 1;
            one -= 5;
        }
        else {
            one -= 9;
        }
    }

    cnt += (two + 8) / 9;
    int remaining_two = two % 9;
    if (remaining_two > 0) {
        one -= (36 - 4 * remaining_two);
    }

    if (one > 0) {
        cnt += (one + 35) / 36;
    }

    cout << cnt << '\n';
    return 0;
}
