#include<iostream>
#include<string>
using namespace std;

string str;

int Len(int num) {
	int i = 0;
	while (num != 0) {
		i++;
		str += (num % 10) + '0';
		num /= 10;
	}
	return i;
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
	for (int i = 1000; i <= 9999; i++) {
		int len = Len(i);
		panduan(str);
		str = "";
	}
	return 0;
}