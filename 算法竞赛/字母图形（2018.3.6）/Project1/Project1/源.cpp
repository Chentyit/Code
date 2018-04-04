#include<iostream>
#include<cmath>
using namespace std;

char zimu[26] = { 'A', 'B', 'C', 'D', 'E', 'F', 'G',
'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q',
'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z' };

int main() {
	int n, m;
	cin >> n >> m;
	char **arr = new char*[n];
	for (int i = 0; i < n; i++) {
		arr[i] = new char[m];
		for (int j = 0; j < m; j++) {
			arr[i][j] = zimu[abs(i - j)];
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << arr[i][j];
		}
		delete[] arr[i];
		cout << endl;
	}
	delete[] arr;
	return 0;
}