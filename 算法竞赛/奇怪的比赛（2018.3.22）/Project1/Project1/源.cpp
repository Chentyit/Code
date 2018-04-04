#include<iostream>
#include<string>
using namespace std;

void Judge(string str) {
	int sum = 10;
	for (int i = 0; i < 10; i++) {
		if (str[i] == '1') {
			sum *= 2;
		}
		else {
			sum -= (i + 1);
		}
	}
	if (sum == 100) {
		cout << str << endl;
	}
}

void dfs(string str, int i) {
	if (i == 10) {
		Judge(str);
		return;
	}
	dfs(str + "0", i + 1);
	dfs(str + "1", i + 1);
}

int main() {
	string str = "";
	dfs(str, 0);
	return 0;
}