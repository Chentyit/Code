#include<iostream>
using namespace std;

int main() {
	int data[20][20], arr[20][20];
	int value, n;
	for (int i = 0; i < 20; i++) {
		for (int j = 0; j < 20; j++) {
			data[i][j] = 0;
			arr[i][j] = -2;
		}
	}
	for (int i = 0; i < 20; i++) {
		for (int j = 0; j < 20; j++) {
			cin >> data[i][j];
		}
	}
	for (int i = 0; i < 20; i++) {
		value = data[i][0];
		n = data[i][1];
		for (int j = n + 1; j > 1; j--) {
			arr[i][j - 2] = value / data[i][j];
			value %= data[i][j];
		}
		if (value != 0) {
			arr[i][0] = -1;
		}
	}
	for (int i = 0; i < 20; i++, cout << endl) {
		if (arr[i][0] != -2) {
			for (int j = 0; j < 20; j++) {
				if (arr[i][j] != -2) {
					if (arr[i][j] == -1) {
						cout << -1;
						break;
					}
					else {
						cout << arr[i][j] << ' ';
					}
				}
				else {
					break;
				}
			}
		}
		else {
			break;
		}
	}
	return 0;
	/*
	int value, n;
	cin >> value >> n;
	int *money = new int[n];
	int *arr = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> money[i];
		arr[i] = 0;
	}
	for (int i = n - 1; i >= 0; i--) {
		if (value / money[i]) {
			arr[i] = value / money[i];
			value %= money[i];
		}
	}
	if (value != 0) {
		cout << -1 << endl;
		return 0;
	}
	for (int i = 0; i < n; i++) {
		cout << arr[i] << ' ';
	}
	return 0;
	*/
}