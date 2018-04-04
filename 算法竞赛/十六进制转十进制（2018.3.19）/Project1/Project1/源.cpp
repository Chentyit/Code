#include<iostream>
#include<cmath>
#include<string>
#include<sstream>
using namespace std;

int main() {
	int i;
	char x;
	long long int sum = 0;
	string str;
	getline(cin, str);
	i = str.length() - 1;
	stringstream ss(str);
	while (ss >> x) {
		if (x >= 'A' && x <= 'F') {
			sum += ((x - 'A') + 10) * pow(16, i);
		}
		else if (x >= 'a' && x <= 'f') {
			sum += ((x - 'a') + 10) * pow(16, i);
		}
		else if (x >= '0'&& x <= '9') {
			sum += (x - '0') * pow(16, i);
		}
		i--;
	}
	cout << sum << endl;
	return 0;
}