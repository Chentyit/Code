#include<iostream>
using namespace std;

int main() {
	int x, hh, mm, i = 0;
	cin >> x >> hh >> mm;
	while (mm % 10 != 7) {
		mm = mm - x;
		if (mm < 0) {
			mm = mm + 60;
			hh--;
			if (hh < 0) {
				hh = 23;
			}
		}
		i++;
	}
	cout << i << endl;
	return 0;
}