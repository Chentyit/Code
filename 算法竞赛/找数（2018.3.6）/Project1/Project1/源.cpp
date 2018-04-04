#include<iostream>
using namespace std;

int main() {
	int num, i, n;
	cin >> num;
	int *arr = new int[num];
	for (i = 0; i < num; i++) {
		cin >> arr[i];
	}
	cin >> n;
	for (i = 0; i < num; i++) {
		if (arr[i] == n) {
			cout << i + 1 << endl;
			break;
		}
	}
	if (i == num) {
		cout << -1 << endl;
	}
	return 0;
}