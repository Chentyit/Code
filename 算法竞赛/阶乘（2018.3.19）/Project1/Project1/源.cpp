#include<iostream>
using namespace std;

long long int arr[3000];

int main() {
	long long int a, i, buf;
	cin >> a;
	buf = a;
	for (i = 0; buf != 0; i++) {
		arr[i] = buf % 10;
		buf /= 10;
	}
	long long int len = i;
	for (buf = a - 1; buf >= 1; buf--) {
		long long int jin = 0, j;
		for (j = 0; j < len; j++) {
			long long int p = arr[j] * buf + jin;
			arr[j] = p % 10;
			jin = (p - arr[j]) / 10;
		}
		if (jin) {
			long long int k = 0, bufj = jin;
			while (bufj) {
				bufj /= 10;
				k++;
			}
			for (; j < k + len; j++) {
				arr[j] = jin % 10;
				jin /= 10;
			}
		}
		len = j;
	}
	for (i = len - 1; i >= 0; i--) {
		cout << arr[i];
	}
	cout << endl;
	return 0;
}