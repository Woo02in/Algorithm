#include<iostream>
#include<algorithm>
#include<vector>
#include<utility>

using namespace std;

long long W, H, f, c, x1, y_1, x2, y_2;

int main() {
	cin >> W >> H >> f >> c >> x1 >> y_1 >> x2 >> y_2;
	long long Final = 0, answer = 0, Size = W * H;
	Final = (x2 - x1) * (y_2 - y_1);
	/*int finalrowsize = W - f;
	int finalcolsize = H / 3;*/
	long long cnt = 0;

	if (f <= W / 2) {
		if (f == 0) {			
			cnt += Final * (c + 1);			
		}
		else {
			if (x2 <= f) {
				cnt += Final * (c + 1) * 2;
			}
			else if (x2 > f && x1 >= f) {
				cnt += Final * (c + 1);
			}
			else if (x2 > f && x1 < f) {
				cnt += Final * (c + 1);
				cnt += (c + 1) * ((f - x1) * (y_2 - y_1));
			}
		}		
	}
	else {
		if (W == f) {
			cnt += Final * (c+1);
		}
		else {
			if (x2 <= W-f) {
				cnt += Final * (c + 1) *2;				
			}
			else if (x2 > W-f && x1 >= W-f) {
				cnt += Final * (c + 1);
			}
			else if (x2 > W-f && x1 < W-f) {
				cnt += Final * (c + 1);
				cnt += (W - f - x1) * (y_2 - y_1) * (c + 1);
				
			}	
		}
	}
	answer = Size - cnt;
	cout << answer << endl;
	return 0;
}