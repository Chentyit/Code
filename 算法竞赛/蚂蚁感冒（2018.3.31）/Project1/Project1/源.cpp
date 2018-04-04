#include<iostream>
#include<algorithm>
using namespace std;

int ant[100];

int main() {
	for (int i = 0; i < 100; i++) {
		ant[i] = 0;
	}
	int a, n, ill = 1;
	cin >> n;
	cin >> a;
	if (a < 0) {
		a = -a;
		ant[a] = -1;
	}
	ant[a] = 1;
	for (int i = 1; i < n; i++) {
		int c;
		cin >> c;
		if (c < 0) {
			ant[-c] = -1;
		}
		else {
			ant[c] = 1;
		}
	}
	if (ant[a] == 1) {
		for (int i = a + 1; i < 100; i++) {
			if (ant[i] == -1) {
				ill++;
			}
		}
		if (ill) {
			for (int i = 0; i < a; i++) {
				if (ant[i] == 1) {
					ill++;
				}
			}
		}
	}
	else if (ant[a] == -1) {
		for (int i = 0; i < a; i++) {
			if (ant[i] == 1) {
				ill++;
			}
		}
		if (ill) {
			for (int i = a + 1; i < 100; i++) {
				if (ant[i] == -1) {
					ill++;
				}
			}
		}
	}
	cout << ill << endl;
	return 0;
}