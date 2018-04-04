#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

long long int arra[100], arrb[100], sum[6000];

int main() {
	long long int i, lena, lenb, len;
	string a, b;
	getline(cin, a);
	cin.clear();
	getline(cin, b);
	for (i = a.length() - 1; i >= 0; i--) {
		arra[a.length() - i - 1] = a[i] - '0';
	}
	for (i = b.length() - 1; i >= 0; i--) {
		arrb[b.length() - i - 1] = b[i] - '0';
	}
	if (a.length() > b.length()) {
		len = a.length();
	}
	else {
		len = b.length();
	}
	int jin = 0;
	for (i = 0; i < len; i++) {
		int p = arra[i] + arrb[i] + jin;
		sum[i] = p % 10;
		jin = (p - sum[i]) / 10;
	}
	if (jin) {
		while (jin) {
			sum[i] = jin % 10;
			jin /= 10;
			i++;
		}
	}
	len = i;
	for (i = len - 1; i >= 0; i--) {
		cout << sum[i];
	}
	cout << endl;
	return 0;
}