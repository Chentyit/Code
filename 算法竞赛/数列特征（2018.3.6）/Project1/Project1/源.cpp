#include<iostream>
using namespace std;

int main() {
	int n, max = -99999999999999999, min = 99999999999999999, buf, sum = 0;
	cin >> n;
	int *arr = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> buf;
		sum += buf;
		if (max < buf) {
			max = buf;
		}
		if (min > buf) {
			min = buf;
		}
	}
	cout << max << endl << min << endl << sum << endl;
	return 0;
}