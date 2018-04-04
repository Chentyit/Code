#include<iostream>
using namespace std;

int main()
{
	int a[4], up = 0, down = 0, pin = 0;
	for (int i = 0; i < 4; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i < 3; i++)
	{
		if (a[i] < a[i + 1])
			up = 1;
		else
		{
			up = 0;
			break;
		}
	}
	for (int i = 0; i < 3; i++)
	{
		if (a[i] > a[i + 1])
			down = 1;
		else
		{
			down = 0;
			break;
		}
	}
	for (int i = 0; i < 3; i++)
	{
		if (a[i] == a[i + 1])
			pin = 1;
		else
		{
			pin = 0;
			break;
		}
	}
	if (up == 1)
		cout << "Fish Rising" << endl;
	else if (down == 1)
		cout << "Fish Diving" << endl;
	else if (pin == 1)
		cout << "Fish At Constant Depth" << endl;
	else
		cout << "No Fish" << endl;
	return 0;
}