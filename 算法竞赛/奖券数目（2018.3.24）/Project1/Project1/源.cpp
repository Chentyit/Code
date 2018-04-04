#include<iostream>
using namespace std;

int main() {
	int index = 0;
	for (int a = 1; a <= 9; a++) {
		for (int b = 0; b <= 9; b++) {
			for (int c = 0; c <= 9; c++) {
				for (int d = 0; d <= 9; d++) {
					for (int e = 0; e <= 9; e++) {
						if (a != 4 && b != 4 && c != 4 && d != 4 && e != 4) {
							index++;
						}
					}
				}
			}
		}
	}
	cout << index << endl;
	return 0;
}