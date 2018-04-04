#include<iostream>
using namespace std;

int main() {
	int n1, n2, i, j;
	cin >> n1 >> n2;
	int *arr1 = new int[n1], *arr2 = new int[n2];
	for (i = 0; i < n1; i++) {
		cin >> arr1[i];
	}
	for (i = 0; i < n2; i++) {
		cin >> arr2[i];
	}
	for (i = 0, j = 0; i < n1; i++) {
		if (j < n2) {
			if ((arr1[i] + arr2[j]) <= 3) {
				j++;
			}
			else {
				j = 0;
			}
		}
		else {
			break;
		}
	}
	if (j == n2) {
		cout << i << endl;
	}
	else {
		cout << i + n2 - 1 - j << endl;
	}
	return 0;
}