//#include <iostream>
//
//using namespace std;
//
//long long check[10];
//
//// ten은 자리 수(일의 자리, 십의자리 .. )
//// calc함수는 n이라는 숫자에 나오는 0~9값을 check배열에 넣어준다.
//void calc(long long n, long long ten)
//{
//	while (n > 0) {
//		check[n % 10] += ten;
//		n /= 10;
//	}
//}
//
//
//void solve(long long A, long long B, long long ten) {	
//	while (A % 10 != 0 && A <= B){		
//		calc(A, ten);
//		A++;
//	}
//	if (A > B) return;
//
//	while (B % 10 != 9 && B >= A){		
//		calc(B, ten);
//		B--;
//	}
//	long long cnt = (B / 10 - A / 10 + 1);
//	//B-A +1 * 자리수 만큼 0~9에 각각 더해준다.
//	for (int i = 0; i < 10; ++i)
//		check[i] += cnt * ten;
//	// 다음자리 수를 계산위해 재귀함수 호출한다.
//	solve(A / 10, B / 10, ten * 10);
//}
//
//int main(){
//	long long n;
//	cin >> n;
//	solve(1, n, 1);
//	for (int i = 0; i < 10; ++i)
//		cout << check[i] << " ";
//	return 0;
//}

#include <iostream>
#include <vector>
#include<cmath>
#include<algorithm>

using namespace std;

int p_2, p_1, p_0, q_2, q_1, q_0;
// 함수 f(x)의 2차항, 1차항, 상수항의 계수를 이용하여 합성 함수 p(x)를 계산
void calculate_p(int f2, int f1, int f0, int g1, int g0) {
    p_2 = f2 * (g1 * g1);
    p_1 = f2 * (2 * g1 * g0) + f1 * g1;
    p_0 = f2*g0*g0 + f0 + f1 * g0;
}

// 함수 g(x)의 1차항, 상수항의 계수를 이용하여 합성 함수 q(x)를 계산
void calculate_q(int f2, int f1, int f0, int g1, int g0) {
    q_2 = g1 * f2;
    q_1 = g1 * f1;
    q_0 = g1 * f0 + g0;
}

int main() {
    int f_2, f_1, f_0;
    int g_1, g_0;
    
    cin >> f_2 >> f_1 >> f_0;    
    cin >> g_1 >> g_0;

    calculate_p(f_2, f_1, f_0, g_1, g_0);
    calculate_q(f_2, f_1, f_0, g_1, g_0);    
    int answer = 0;
    int a2, a1, a0;
    a2 = p_2 - q_2;
    a1 = p_1 - q_1;
    a0 = p_0 - q_0;
    /*cout << p_2 << " " << p_1 << " " << p_0 << endl;
    cout << q_2 << " " << q_1 << " " << q_0 << endl;*/
    /*cout << a2 << " " << a1 << " " << a0 << endl;*/
    if (a2 == 0 && a1 == 0 && a0 == 0)
        cout << "Nice" << endl;
    else if (a2 == 0 && a1 == 0 && a0 != 0)
        cout << "Head on" << endl;
    else if (a2 == 0 && a1 != 0 && a0 != 0) {
        cout << "Remember my character" << endl;
    }
    else if (pow(a1, 2) - (4 * a2 * a0) > 0) {
        cout << "Go ahead" << endl;
    }
    
    else if (pow(a1, 2) - (4 * a2 * a0) == 0) {
        cout << "Remember my character" << endl;
    }
    else if (pow(a1, 2) - (4 * a2 * a0) < 0) {
        cout << "Head on" << endl;
    }
    
        
    
    return 0;
}
