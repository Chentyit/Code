#include<iostream>
#include<string>
using namespace std;

string tran(int n, int shu) {
	string str, fu;

	int yu;
	while (shu) {
		yu = shu%n;
		shu /= n;
		if (yu<10) {
			fu = '0' + yu;
		}
		else {
			fu = 'A' + yu - 10;
		}
		str = fu + str;
	}
	return str;
}

string compare(int n, int shu) {
	string zheng, fan;
	string fu;
	int yu;
	while (shu) {
		yu = shu%n;
		shu /= n;
		if (yu<10) {
			fu = '0' + yu;
		}
		else {
			fu = 'A' + yu - 10;
		}
		zheng = fu + zheng;
		fan = fan + fu;
	}
	if (zheng == fan) return zheng;
	else return "error";
}

int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= 300; i++) {
		string result = compare(n, i*i);
		if (result != "error")
			cout << tran(n, i) << ' ' << result << endl;
	}
	return 0;
}