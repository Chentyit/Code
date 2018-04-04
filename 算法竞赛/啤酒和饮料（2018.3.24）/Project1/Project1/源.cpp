#include<iostream>
#define pear 23
#define drink 19
#define value 823
using namespace std;

int main() {
	int x = value / drink, i, j;
	bool flag = false;
	for (i = x; i >= 0; i--) {
		for (j = 0; j < i; j++) {
			if ((i * drink + j * pear) == value) {
				flag = true;
				break;
			}
		}
		if (flag) {
			break;
		}
	}
	cout << j << endl;
	return 0;
}