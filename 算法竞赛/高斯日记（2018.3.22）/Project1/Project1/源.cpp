#include<iostream>
using namespace std;

int month[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

int judge(int year) {
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
		return 366;
	}
	else {
		return 365;
	}
}

int main() {
	int n = 7868, i, j;
	for (i = 1778; i < 2018; i++) {
		if (n >= 365) {
			n -= judge(i);
		}
		else {
			break;
		}
	}
	for (j = 0; n >= 30; j++) {
		n -= month[j];
	}
	if (judge(i) == 366) {
		n = n - 2;
	}
	else {
		n = n - 1;
	}
	cout << i << '-' << j + 1 << '-' << n << endl;
	return 0;
}