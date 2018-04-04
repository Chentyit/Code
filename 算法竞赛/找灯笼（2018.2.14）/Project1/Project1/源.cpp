#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	long long int a, b, x, result, *arra, *arrb;
	cin >> a >> b;
	arra = new long long int[a];
	arrb = new long long int[b];
	for (int i = 0; i < a; i++) {
		cin >> arra[i];
	}
	for (int i = 0; i < b; i++) {
		cin >> arrb[i];
	}
	sort(arra, arra + a);
	sort(arrb, arrb + b);
	result = arra[a - 2] * arrb[b - 1];
	cout << result << endl;
	return 0;
}