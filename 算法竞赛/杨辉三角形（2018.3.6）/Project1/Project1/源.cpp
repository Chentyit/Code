#include<iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	int **arr = new int*[n];
	for (int i = 0; i < n; i++) {
		arr[i] = new int[i + 1];
		arr[i][0] = 1;
		for (int j = 1; j < i; j++) {
			arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
		}
		arr[i][i] = 1;
	}
	for (int i = 0; i < n; i++, cout << endl) {
		for (int j = 0; j < i + 1; j++) {
			if (arr[i][j] != 0) {
				cout << arr[i][j] << ' ';
			}
			else {
				break;
			}
		}
		delete[] arr[i];
	}
	delete[] arr;
	return 0;
}