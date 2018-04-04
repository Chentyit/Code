#include<iostream>
#include<cmath>
using namespace std;

int a[10] = { 1, 0, 0, 0, 1, 0, 1, 0, 2, 1 };

int quan(long long int i) {
	int sum = 0;
	if (i == 0) {
		sum += 1;
	}
	while (i != 0) {
		sum += a[i % 10];
		i /= 10;
	}
	return sum;
}

int main() {
	long long int a, num, i;
	cin >> a;
	for (i = 0; i < pow(10, 18) / 2; i++) {
		num = quan(i);
		if (num == a) {
			cout << i << endl;
			return 0;
		}
	}
	cout << -1 << endl;
	return 0;
}