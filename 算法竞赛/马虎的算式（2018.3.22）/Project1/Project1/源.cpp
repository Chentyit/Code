#include<iostream>
using namespace std;

int main() {
	int result = 0;
	for (int a = 1; a <= 9; a++) {
		for (int b = 1; b <= 9; b++) {
			if (b != a) {
				for (int c = 1; c <= 9; c++) {
					if (c != a && c != b) {
						for (int d = 1; d <= 9; d++) {
							if (d != c && d != b && d != a) {
								for (int e = 1; e <= 9; e++) {
									if (e != d && e != c && e != b && e != a) {
										int sum1 = (a * 10 + b) * (c * 100 + d * 10 + e);
										int sum2 = (a * 100 + d * 10 + b) * (c * 10 + e);
										if (sum1 == sum2) {
											result++;
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	cout << result << endl;
	return 0;
}