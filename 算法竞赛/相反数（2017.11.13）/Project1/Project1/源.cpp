#include<iostream>
#include<string>
#include<iomanip>
#include<cmath>
using namespace std;

int main()
{
	int i, z, m;
	double  k = 0, j;
	string s;
	cin >> s;
	for (i = 0; i < s.length(); i++)
	{
		if (s[i] == '.')
		{
			z = i;
			break;
		}
	}
	if (s[0] == '-' || s[0] == '+')
		i = 1;
	else
		i = 0;
	for (; i < s.length(); i++)
	{
		if (i < z)
			k = k * 10 + s[i] - 48;
		if (i > z)
		{
			m = i - z;
			j = s[i] - 48;
			while (m)
			{
				j = j / 10;
				m--;
			}
			k = k + j;
		}
	}
	j = s.length() - (z + 1);
	if (s[0] == '-')
		cout << fixed << setprecision(j) << k << endl;
	else
		cout << fixed << setprecision(j) << -k << endl;
	return 0;
}