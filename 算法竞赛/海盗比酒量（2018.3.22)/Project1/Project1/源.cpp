#include<iostream>
using namespace std;

int main() {
	float arr[5];
	for (int i = 20; i >= 0; i--) {
		arr[0] = i;
		for (int j = 0; j < i; j++) {
			arr[1] = j;
			for (int k = 1; k < j; k++) {
				arr[2] = k;
				for (int m = 1; m < k; m++) {
					arr[3] = m;
					if (j * k * m + i * k * m + i * j * m + i * j * k == i * j * k * m) {
						arr[4] = 0;
						for (int i = 0; i < 5; i++) {
							cout << arr[i] << ' ';
						}
						cout << endl;
					}
				}
			}
		}
	}
	return 0;
}