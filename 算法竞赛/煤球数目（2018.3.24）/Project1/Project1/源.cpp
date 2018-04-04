#include<iostream>
using namespace std;

int recursion(int n) {
	if (n == 1) {
		return 1;
	}
	return recursion(n - 1) + (n * (n + 1)) / 2;
}

int main() {
	cout << recursion(100) << endl;
	return 0;
}