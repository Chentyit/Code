#include<iostream>
using namespace std;

int main() {
	int n, *arr1, *arr2, i, i1 = 0, i2 = 0, j = 0, k, z;
	cin >> n;
	k = n;
	arr1 = new int[n];
	arr2 = new int[n];
	for (int i = 0; i < n; i++) {
		arr1[i] = arr2[i] = 0;
	}
	while (k--) {
		cin >> z;
		if (z == 1) {
			arr1[i1++] = z;
		}
		else if (z == 2) {
			arr2[i2++] = z;
		}
	}
	if (arr2[0] != 0 && arr1[0] != 0) {
		if (i2 > i1)
			j = i1;
		else {
			j = i2;
			z = 0;
			for (i = i2; i < n; i++) {
				if (arr1[i] != 0) {
					z++;
					if (z == 3) {
						j++;
						z = 0;
					}
				}
				else {
					break;
				}
			}
		}
	}
	else if (arr1[0] != 0 && arr2[0] == 0) {
		z = 0;
		for (i = 0; i < n; i++) {
			if (arr1[i] != 0) {
				z++;
				if (z == 3) {
					j++;
					z = 0;
				}
			}
			else {
				break;
			}
		}
	}
	cout << j << endl;
	return 0;
}