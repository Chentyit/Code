#include<iostream>
#include<string>
using namespace std;

int main() {
	char zimu[16] = { '0', '1', '2', '3', '4', '5', '6', '7', 
		'8', '9', 'A', 'B', 'C', 'D', 'E', 'F' };
	long long int dec;
	string hex = "";
	cin >> dec;
	if (dec) {
		while (dec) {
			hex += zimu[dec % 16];
			dec /= 16;
		}
	}
	else {
		hex += zimu[0];
	}
	for (int i = hex.length() - 1; i >= 0; i--) {
		cout << hex[i];
	}
	cout << endl;
	return 0;
}