#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	long long int l, r, a;
	cin >> l >> r >> a;
	if (l > r) {
		swap(l, r);
	}
	long long int buf = r - l;
	if (buf >= a) {
		cout << (l + a) * 2 << endl;
	}
	else {
		cout << (r + (a - buf) / 2) * 2 << endl;
	}
	return 0;
}