#include<iostream>
#include<string>
using namespace std;

int main() {
	long long int n, m;
	string *s, *k;
	cin >> n >> m;
	s = new string[n];
	k = new string[m];
	cin.get();
	for (int i = 0; i < n; i++) {
		getline(cin, s[i]);
	}
	for (int i = 0; i < m; i++) {
		getline(cin, k[i]);
	}
	for (int i = 0; i < m; i++) {
		int flag = 0;
		string z;
		for (char c : k[i]) {
			if (c == ' ') {
				flag = 1;
			}
			if (flag == 1 && c != ';') {
				z += c;
			}
		}
		for (int j = 0; j < n; j++) {
			if (s[j].find(z) != string::npos) {
				string p = " #";
				for (char v : s[j]) {
					if (v != ' ') {
						p += v;
					}
					else {
						break;
					}
				}
				cout << k[i] + p << endl;
			}
		}
	}
	return 0;
}
/*
6 8
main 192.168.0.2
main 192.168.33.27
replica 192.168.0.1
google 8.8.8.8
codeforces 212.193.33.27
server 138.197.64.57
block 192.168.0.1;
proxy 192.168.0.2;
redirect 138.197.64.57;
block 8.8.8.8;
bbb 192.168.33.27;
cf 212.193.33.27;
unblock 8.8.8.8;
check 138.197.64.57;
*/