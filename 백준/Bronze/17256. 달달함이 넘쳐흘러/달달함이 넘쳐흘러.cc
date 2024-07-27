#include<iostream>

using namespace std;
int ax, ay, az, cx, cy, cz, bx, by, bz;
int main(){
	cin >> ax >> ay >> az >> cx >> cy >> cz;
	bx = cx - az;
	by = cy / ay;
	bz = cz - ax;
	cout << bx << " " << by << " " << bz;
	return 0;
}