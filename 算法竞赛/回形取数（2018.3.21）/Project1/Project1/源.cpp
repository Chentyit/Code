#include<iostream>
using namespace std;

int main() {
	int n, m, arr[200][200];
	cin >> m >> n;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			cin >> arr[i][j];
		}
	}

	int i = 0, j = 0;
	for (i = 0; i < (n + 1) / 2 && i < (m + 1) / 2; i++) {
		for (j = i; j < m - i; j++) {
			cout << arr[j][i] << ' ';
		}
		for (j = i + 1; j < n - i; j++) {
			cout << arr[m - i - 1][j] << ' ';
		}
		if (n - i - 1 > i) {
			for (j = m - i - 2; j >= i; j--) {
				cout << arr[j][n - i - 1] << ' ';
			}
		}
		if (m - i - 1 > i) {
			for (j = n - i - 2; j > i; j--) {
				cout << arr[i][j] << ' ';
			}
		}
	}
	cout << endl;
	return 0;
}