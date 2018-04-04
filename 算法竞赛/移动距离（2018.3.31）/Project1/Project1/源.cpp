#include <iostream>
#include<cmath>
using namespace std;

int main(int argc, char** argv) {
	int w, m, n;
	int x1, y1, x2, y2;
	int lenx, leny;
	cin >> w >> m >> n;
	x1 = m / w;
	y1 = m % w;
	x2 = n / w;
	y2 = n % w;
	if (x1 % 2 == 0) {
		if (y1 == 0) {
			x1--;
		}
		else {
			y1 = y1 - 1;
		}
	}
	else if (x1 % 2 != 0) {
		if (y1 == 0) {
			x1--;
			y1 = 3;
		}
		else {
			y1 = w - y1;
		}
	}
	if (x2 % 2 == 0) {
		if (y2 == 0) {
			x2--;
		}
		else {
			y2 = y2 - 1;
		}
	}
	else if (x2 % 2 != 0) {
		if (y2 == 0) {
			x2--;
			y2 = 3;
		}
		else {
			y2 = w - y2;
		}
	}
	lenx = fabs(x2 - x1);
	leny = fabs(y2 - y1);
	cout << lenx + leny << endl;
	return 0;
}