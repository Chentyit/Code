#include<iostream>
#include<string>
using namespace std;

string zhuan(int i) {
	char bin[2] = { '0', '1' };
	string str = "";
	if (i) {
		while (i) {
			str += bin[i % 2];
			i /= 2;
		}
	}
	else {
		str += '0';
	}
	for (int i = 0; i < str.length() / 2; i++) {
		char c;
		c = str[i];
		str[i] = str[str.length() - 1 - i];
		str[str.length() - 1 - i] = c;
	}
	return str;
}

int main() {
	string str;
	for (int i = 0; i < 32; i++) {
		str = zhuan(i);
		switch (str.length()) {
		case 1:
			str = "0000" + str;
			break;
		case 2:
			str = "000" + str;
			break;
		case 3:
			str = "00" + str;
			break;
		case 4:
			str = "0" + str;
			break;
		}
		cout << str << endl;
	}
	return 0;
}