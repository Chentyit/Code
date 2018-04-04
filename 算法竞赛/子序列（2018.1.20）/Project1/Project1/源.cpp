#include<iostream>
#include<string>
using namespace std;

bool Find(string s1, string s2) {
	int i, j = 0;
	for (i = 0; i < s2.length(); i++) {
		for (; j < s1.length(); j++) {
			if (s2[i] == s1[j]) {
				break;
			}
		}
		if (j == s1.length()) {
			break;
		}
	}
	if (i == s2.length() && j <= s1.length()) {
		return true;
	}
	else {
		return false;
	}
}

int main() {
	string s1, s2;
	getline(cin, s1);
	getline(cin, s2);
	bool flag = Find(s1, s2);
	cout << s1 << endl;
	cout << s2 << endl;
	if (flag == true) {
		cout << "找到了" << endl;
	}
	else {
		cout << "没找到" << endl;
	}
	return 0;
}