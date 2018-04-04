#include<iostream>
#include<string>
using namespace std;

int main() {
	char arr[5] = { 'a', 'e', 'i', 'o', 'u' };
	int i = 0, flag = 0;
	string c;
	cin >> c;
	for (char k : c) {
		if (k >= 'a' && k <= 'z') {
			for (char z : arr) {
				if (k == z) {
					i++;
				}
			}
		}
		else if (k >= '0' && k <= '9') {
			if ((k - '0') % 2 != 0) {
				i++;
			}
		}
	}
	cout << i;
	return 0;
}