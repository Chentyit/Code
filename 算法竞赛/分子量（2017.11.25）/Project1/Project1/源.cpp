#include<iostream>
using namespace std;

int main()
{
	int i = 0, j = 0, v[100], k = 0;
	float sum = 0;
	char c[100];
	char s;
	for (int z = 0; z < 100; z++)
		v[z] = 1;
	while (cin >> s)
	{
		if (s >= 'A' && s <= 'Z')
		{
			c[i] = s;
			i++;
			j++;
			k = 0;
		}
		else
		{
			k = k * 10 + (s - '0');
			v[j] = k;
		}
	}
	for (int z = 0; z < i; z++)
	{
		cout << c[z] << ' ' << v[z + 1] << endl;
		switch (c[z])
		{
		case 'C': 
			sum += 12.01 * v[z + 1];
			break;
		case 'H':
			sum += 1.008 * v[z + 1];
			break;
		case 'O':
			sum += 16.00 * v[z + 1];
			break;
		case 'N':
			sum += 14.01 * v[z + 1];
		default: break;
		}
	}
	cout << sum << endl;
	return 0;
}