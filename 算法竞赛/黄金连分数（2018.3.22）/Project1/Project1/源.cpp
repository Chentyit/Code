#include <iostream> 
using namespace std; 

int main() {
	int a[100];
	int b = 1, c = 1; 
	for (int i = 0; i < 19; i++) { 
		b = b + c;
		c = c + b; 
	} 
	cout << b << " " << c << endl; 
	for (int i = 0; i < 100; i++) { 
		a[i] = b / c; 
		b = (b%c) * 10; 
		cout << a[i]; 
	} 
	cout << endl; 
	return 0;
}
