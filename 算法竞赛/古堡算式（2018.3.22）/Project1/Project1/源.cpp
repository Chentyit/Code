#include<iostream>
#include<cmath>
using namespace std;

bool judge(int i) {
	int buf = i, arr[5], index = 0;
	while (buf) {
		arr[index] = buf % 10;
		buf /= 10;
		index++;
	}
	for (int j = 0; j < 4; j++) {
		for (int k = j + 1; k < 5; k++) {
			if (arr[j] == arr[k]) {
				return false;
			}
		}
	}
	return true;
}

int main() {
	int buf, n = 0, z = 4;
	for (int i = 10000; i <= 99999; i++) {
		buf = i;
		if (judge(buf)) {
			while (buf) {
				n += (buf % 10) * pow(10, z);
				buf /= 10;
				z--;
			}
			z = 4;
			for (int j = 1; j <= 9; j++) {
				if (i * j == n) {
					cout << i << endl;
				}
			}
			n = 0;
		}
	}
	return 0;
}