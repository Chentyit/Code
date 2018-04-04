#include<iostream>
using namespace std;

int main()
{
	int a[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	char x;
	while (cin >> x)
	{
		a[x - '0']++;
	}
	for (int i = 0; i < 10; i++)
	{
		cout << a[i] << ' ';
	}
	cout << endl;
	return 0;
}