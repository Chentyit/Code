#include<iostream>
using namespace std;

void printrow(int i, int j, int c, char **d)
{
	for (; j < c; j++)
	{
		if (d[i][j] >= 'a' && d[i][j] <= 'z')
		{
			cout << d[i][j];
		}
		else
		{
			break;
		}
	}
}

void printcol(int i, int j, int r, char **d)
{
	for (; i < r; i++)
	{
		if (d[i][j] >= 'a' && d[i][j] <= 'z')
		{
			cout << d[i][j];
		}
		else
		{
			break;
		}
	}
}

int main()
{
	int r, c, **z;
	char **d, k;
	cin >> r >> c;
	d = new char*[r];
	z = new int*[r];
	for (int i = 0; i < r; i++)
	{
		d[i] = new char[c];
		z[i] = new int[c];
		for (int j = 0; j < c; j++)
		{
			cin >> k;
			d[i][j] = k;
			z[i][j] = 0;
		}
	}
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			if (i == 0 && d[i][j] != '*')
				z[i][j] = 1;
			else if (j == 0 && d[i][j] != '*')
				z[i][j] = 1;
			else if (i > 0 && (d[i - 1][j] == '*' || d[i][j - 1] == '*') && d[i][j] != '*')
				z[i][j] = 1;
		}
	}
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			if (z[i][j] == 1)
			{
				printrow(i, j, c, d);
				cout << endl;
			}
		}
	}
	cout << "==================================================" << endl;
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			if (z[i][j] == 1)
			{
				printcol(i, j, r, d);
				cout << endl;
			}
		}
	}
	return 0;
}