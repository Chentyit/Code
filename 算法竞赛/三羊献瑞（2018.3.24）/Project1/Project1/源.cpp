#include<iostream>
using namespace std;

int main() {
	for (int a = 1; a <= 9; a++) {
		for (int b = 0; b <= 9; b++) {
			if (b == a) continue;
			for (int c = 0; c <= 9; c++) {
				if (c == a || c == b) continue;
				for (int d = 0; d <= 9; d++) {
					if (d == a || d == b || d == c) continue;
					for (int e = 1; e <= 9; e++) {
						if (e == a || e == b || e == c || e == d) continue;
						for (int f = 0; f <= 9; f++) {
							if (f == a || f == b || f == c || f == d || f == e) continue;
							for (int g = 0; g <= 9; g++) {
								if (g == a || g == b || g == c || g == d || g == e || g == f) continue;
								for (int h = 0; h <= 9; h++) {
									if (h == a || h == b || h == c || h == d || h == e || h == f || h == g) continue;
									int sum1 = a * 1000 + b * 100 + c * 10 + d;
									int sum2 = e * 1000 + f * 100 + g * 10 + b;
									int sum3 = e * 10000 + f * 1000 + c * 100 + b * 10 + h;
									if (sum1 + sum2 == sum3) {
										cout << e << f << g << b << endl;
									}
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}