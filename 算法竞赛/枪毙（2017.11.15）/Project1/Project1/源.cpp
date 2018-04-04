#include<iostream>
using namespace std;

int main()
{
	int n, *a, *b, max, num;
	cin >> n;
	a = new int[n];
	b = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i] >> b[i];
		a[i] = a[i] * b[i];
	}
	max = a[0];
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << endl;
		if (a[i] >= max)
		{
			max = a[i];
			num = i + 1;
		}
	}
	cout << num << endl;
	return 0;
}