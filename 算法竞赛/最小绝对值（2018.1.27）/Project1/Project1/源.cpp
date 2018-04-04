#include<iostream>
#include<cmath>
using namespace std;

int main() {
	long long int T;
	long long int *arrn, *arrz;
	cin >> T;
	arrn = new long long int[T];
	arrz = new long long int[T];
	for (long long int i = 0; i < T; i++) {
		cin >> arrn[i] >> arrz[i];
	}
	for (long long int j = 0; j < T; j++) {
		long long int y = arrz[j] - 1, ybuf;
		long long int maxf = -65535;
		ybuf = y - 1;
		long long int buf = pow(ybuf, arrn[j]) + pow(y, arrn[j]) - pow(arrz[j], arrn[j]);
		while (buf > 0 && ybuf > 0) {
			if (buf > maxf) {
				maxf = buf;
			}
			ybuf--;
			buf = pow(ybuf, arrn[j]) + pow(y, arrn[j]) - pow(arrz[j], arrn[j]);
		}
		cout << ybuf << ' ' << y << ' ' << 0 - buf << endl;
	}
	return 0;
}