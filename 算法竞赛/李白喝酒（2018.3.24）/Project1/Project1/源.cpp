#include<iostream>
#include<string>
using namespace std;

int index = 0;

void judge(string str) {
	int value = 2;
	for (int i = 0; i < 15; i++) {
		if (str[i] == 'a') {
			value *= 2;
		}
		else if (str[i] == 'b') {
			value--;
		}
	}
	if (value == 0) {
		index++;
	}
	
}

void dfs(string s, int shop, int flower) {
	if (shop == 5 && shop + flower == 14) {
		judge(s + "b");
		return;
	}
	else if (shop + flower > 15) {
		return;
	}
	dfs(s + "a", shop + 1, flower);
	dfs(s + "b", shop, flower + 1);
}

int main() {
	string s = "";
	int shop = 0, flower = 0;
	dfs(s, shop, flower);
	cout << index << endl;
	return 0;
}