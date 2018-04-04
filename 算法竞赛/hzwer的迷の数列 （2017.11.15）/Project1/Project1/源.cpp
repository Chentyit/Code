#include<iostream>
using namespace std;

int main()
{
	int i, n, k, choice, *a, *b, x, flag = 0;
	cin >> n >> k;
	a = new int[n];
	b = new int[n];
	for (i = 0; i < n; i++)
	{
		cin >> a[i];
		b[n - i - 1] = a[i];
	}
	while (cin >> choice && k != 0)
	{
		k--;
		if (choice == 1)
		{
			cin >> i;
			if (flag == 0)
				cout << a[i - 1] << endl;
			else if(flag == 1)
				cout << b[i - 1] << endl;
		}
		if (choice == 2)
		{
			cin >> i >> x;
			if (flag == 0)
			{
				a[i - 1] = x;
				b[n - i] = x;
			}
			else if (flag == 1)
			{
				a[n - i] = x;
				b[i - 1] = x;
			}
		}
		if(choice == 3)
		{
			if (flag == 0)
				flag = 1;
			else if (flag == 1)
				flag = 0;
		}
	}
	return 0;
}