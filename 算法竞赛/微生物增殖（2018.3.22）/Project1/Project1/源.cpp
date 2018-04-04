#include<iostream>
using namespace std;

int main() {
	int x = 10, y = 90;
	for (int i = 1; i <= 60; i++) {
		y -= x;
		if (i % 2 == 0) {
			y *= 2;
		}
		if (i % 3 == 0) {
			x *= 2;
		}
	}
	if (y <= 0) {
		cout << 0 << endl;
	}
	else {
		cout << y << endl;
	}
	return 0;
}