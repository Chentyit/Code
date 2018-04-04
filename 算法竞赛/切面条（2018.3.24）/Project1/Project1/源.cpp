#include<iostream>
using namespace std;

int recursion(int n) {
	if (n == 0) {
		return 2;
	}
	return 2 * recursion(n - 1) - 1;
}

int main() {
	cout << recursion(10) << endl;
	return 0;
}