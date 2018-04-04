#include<iostream>
#include<algorithm>
using namespace std;

void Print(int *arr, int n) {
	for (int i = 0; i < n; i++) {
		cout << arr[i] << ' ';
	}
	cout << endl;
}

int main() {
	int n, *arr, sum = 0;
	cin >> n;
	arr = new int[n + 1];
	for (int i = 1; i < n + 1; i++) {
		cin >> arr[i];
	}
	arr[0] = 65535;
	int index = 0;
	while (index < n - 1) {
		for (int i = index + 1; i < n + 1; i++) {
			if (arr[index] > arr[i]) {
				swap(arr[index], arr[i]);
			}
		}
		Print(arr, n + 1);
		for (int i = index + 2; i < n + 1; i++) {
			if (arr[index + 1] > arr[i]) {
				swap(arr[index + 1], arr[i]);
			}
		}
		Print(arr, n + 1);
		arr[index + 1] += arr[index];
		sum += arr[index + 1];
		arr[index] = 0;
		swap(arr[index + 1], arr[index + 2]);
		index++;
		Print(arr, n + 1);
	}
	cout << arr[n] << endl;
	return 0;
}