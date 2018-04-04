#include<iostream>
using namespace std;

int main() {
	long long int n, arr[1001];
	bool flag = 0;
	cin >> n;
	arr[1] = 1, arr[2] = 1;
	for (int i = 3; i <= 1000; i++) {
		arr[i] = arr[i - 1] + arr[i - 2];
	}
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= 1000; j++) {
			if (i == arr[j]) {
				cout << 'O';
				flag = 1;
				break;
			}
			if (i < arr[j]) {
				break;
			}
		}
		if (flag == 1) {
			flag = 0;
			continue;
		}
		else {
			cout << 'o';
		}
	}
	cout << endl;
	return 0;
}