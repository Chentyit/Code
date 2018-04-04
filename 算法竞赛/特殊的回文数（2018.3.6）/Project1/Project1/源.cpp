#include<iostream>
#include<string>
using namespace std;

string str;

int Len(int num, int n) {
	int i = 0, sum = 0;
	while (num != 0) {
		i++;
		sum += num % 10;
		str += (num % 10) + '0';
		num /= 10;
	}
	if (sum == n) {
		return i;
	}
	else {
		return 0;
	}
}

void panduan(string s) {
	int len = s.length();
	for (int i = 0; i < len / 2; i++) {
		if (s[i] != s[len - i - 1]) {
			return;
		}
	}
	cout << s << endl;
}

int main() {
	int n;
	cin >> n;
	for (int i = 10000; i <= 999999; i++) {
		int len = Len(i, n);
		if (len) {
			panduan(str);
			str = "";
		}
		else {
			str = "";
		}
	}
	return 0;
}