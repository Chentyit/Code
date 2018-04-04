#include<iostream>
#include<cstring>
using namespace std;

struct person {
	char name[15];
	int get, out;
};

int main()
{
	int n, m, money;
	char na[15], *per;
	cin >> n;
	person *p = new person[n];
	for (int i = 0; i < n; i++)
	{
		cin >> p[i].name;
		p[i].get = p[i].out = 0;
	}
	while (cin >> na)
	{
		cin >> money >> m;
		for (int i = 0; i < n; i++)
		{
			if (strcmp(na, p[i].name) == 0)
			{
				if (m == 0)
				{
					p[i].get += money;
					p[i].out += money;
				}
				else
				{
					p[i].get += (money - (money / m) * m);
					p[i].out += money;
				}
			}
		}
		per = new char[m];
		for (int j = 0; j < m; j++)
		{
			cin >> na;
			for (int i = 0; i < n; i++)
			{
				if (strcmp(na, p[i].name) == 0)
				{
					p[i].get += money / m;
				}
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout << p[i].name << ' ' << p[i].get - p[i].out << '\n';
	}
	return 0;
}