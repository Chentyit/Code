#include<iostream>
using namespace std;

int main() {
	for (int i = 1; i <= 100; i++) {
		for (int j = i + 1; j <= 100; j++) {
			if ((i + j)*(j - i + 1) / 2 == 236) {
				cout << i << endl;
				return 0;
			}
		}
	}
}