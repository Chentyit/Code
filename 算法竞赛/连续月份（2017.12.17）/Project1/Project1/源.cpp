#include<iostream>
using namespace std;

int run[12] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
int pin[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

void compire(int *nian, int *arr, int n) {
	int i, j;
	for (i = 0; i < 12; i++) {
		for (j = 0; j < n; j++) {
			if (nian[i % 12] == arr[j % n]) {
				i++;
			}
			else {
				break;
			}
		}
		if (j == n) {
			cout << "Yes" << endl;
			return;
		}
	}
	cout << "No" << endl;
}

int main() {
	int n, k, *arr, z, flag = 0, index = 0, j;
	cin >> n;
	k = n;
	arr = new int[n];
	while (k--) {
		cin >> z;
		if (z == 28) {
			flag = 0;
		}
		else if(z == 29) {
			flag = 1;
		}
		arr[index++] = z;
	}
	k = 0;
	if (flag == 1) {
		compire(run, arr, n);
	}
	if (flag == 0) {
		compire(pin, arr, n);
	}
	return 0;
}