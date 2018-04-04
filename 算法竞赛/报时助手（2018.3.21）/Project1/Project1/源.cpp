#include<iostream>
#include<string>
using namespace std;

const string number[51] = {
	"zero", "one", "two", "three", "four",
	"five", "six", "seven", "eight", "nine",
	"ten", "eleven", "twelve", "thirteen", "fourteen",
	"fifteen", "sixteen", "seventeen", "eighteen", "nineteen",
	"twenty", "", "", "", "",
	"", "", "", "", "",
	"thirty", "", "", "", "",
	"", "", "", "", "",
	"forty", "", "", "", "",
	"", "", "", "", "", "fifty" };

int main() {
	int h, m, x, y, z, k;
	string time = "";
	cin >> h >> m;
	if (m == 0) {
		if (h >= 0 && h <= 20) {
			time += (number[h] + " o'clock");
			cout << time << endl;
			return 0;
		}
		else {
			k = h % 10;
			z = h - k;
			time += (number[z] + " " + number[k] + " o'clock");
			cout << time << endl;
			return 0;
		}
	}
	if (h % 10 == 0) {
		if (m >= 0 && m <= 20) {
			x = m % 10;
			y = m - x;
			time += (number[h] + " " + number[m]);
			cout << time << endl;
			return 0;
		}
		else {
			x = m % 10;
			y = m - x;
			time += (number[h] + " " + number[y] + " " + number[x]);
			cout << time << endl;
			return 0;
		}
	}
	else if (h >= 0 && h < 20) {
		if (m >= 0 && m <= 20) {
			x = m % 10;
			y = m - x;
			time += (number[h] + " " + number[m]);
			cout << time << endl;
			return 0;
		}
		else {
			x = m % 10;
			y = m - x;
			time += (number[h] + " " + number[y] + " " + number[x]);
			cout << time << endl;
			return 0;
		}
	}
	else {
		k = h % 10;
		z = h - k;
		if (m >= 0 && m < 20) {
			time += (number[z] + " " + number[k] + " " + number[m]);
			cout << time << endl;
			return 0;
		}
		else {
			x = m % 10;
			y = m - x;
			time += (number[z] + " " + number[k] + " " + number[y] + " " + number[x]);
			cout << time << endl;
			return 0;
		}
	}
}