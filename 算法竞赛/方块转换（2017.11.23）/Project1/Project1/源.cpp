#include<iostream>
using namespace std;

char** xuanzhuan(char **k, int n)
{
	char **temp;
	int sum = n * n, i = 0, xk = 0, yk = 0, xp = 0, yp= n-1;
	temp = new char*[n];
	for (int i = 0; i < n; i++)
	{
		temp[i] = new char[n];
		for (int j = 0; j < n; j++)
		{
			temp[i][j] = '0';
		}
	}
	temp[xp][yp] = k[xk][yk];
	while (i < sum-1)
	{
		while (xp+1 < n && temp[xp+1][yp] == '0')
		{
			temp[++xp][yp] = k[xk][++yk];
			i++;
		}
		while (yp - 1 >= 0 && temp[xp][yp-1] == '0')
		{
			temp[xp][--yp] = k[++xk][yk];
			i++;
		}
		while (xp - 1 >= 0 && temp[xp-1][yp] == '0')
		{
			temp[--xp][yp] = k[xk][--yk];
			i++;
		}
		while (yp + 1 < n && temp[xp][yp+1] == '0')
		{
			temp[xp][++yp] = k[--xk][yk];
			i++;
		}
	}
	return temp;
}

char** iso(char **k, int n)
{
	char **temp;
	temp = new char*[n];
	for (int i = 0; i < n; i++)
	{
		temp[i] = new char[n];
		for (int j = 0; j < n; j++)
		{
			temp[i][j] = k[i][n - j - 1];
		}
	}
	return temp;
}

bool bijiao(char **arry, char **arrb, int n)
{
	int flag1 = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (arry[i][j] == arrb[i][j])
				flag1 = 1;
			else
			{
				flag1 = 0;
				break;
			}
		}
		if (flag1 == 0)
			break;
	}
	return flag1;
}

int main()
{
	char **arry, **arrb, **arr;
	int n, flag1 = 0, z = 1;
	cin >> n;
	arry = new char*[n];
	arrb = new char*[n];
	for (int i = 0; i < n; i++)
	{
		arry[i] = new char[n];
		for (int j = 0; j < n; j++)
		{
			cin >> arry[i][j];
		}
	}
	arr = arry;
	for (int i = 0; i < n; i++)
	{
		arrb[i] = new char[n];
		for (int j = 0; j < n; j++)
		{
			cin >> arrb[i][j];
		}
	}
	while (z <= 3)
	{
		arry = xuanzhuan(arry, n);
		flag1 = bijiao(arry, arrb, n);
		if (flag1 == 0)
		{
			z++;
			continue;
		}
		else
		{
			cout << z << endl;
			return 0;
		}
	}
	arry = xuanzhuan(arry, n);
	arry = iso(arry, n);
	flag1 = bijiao(arry, arrb, n);
	if (flag1 == 1)
	{
		cout << 4 << endl;
		return 0;
	}
	else
	{
		arry = iso(arry, n);
	}
	arry = iso(arry, n);
	z = 0;
	while (z <= 3)
	{
		arry = xuanzhuan(arry, n);
		flag1 = bijiao(arry, arrb, n);
		if (flag1 == 0)
		{
			z++;
			continue;
		}
		else
		{
			cout << 5 << endl;
			return 0;
		}
	}
	flag1 = bijiao(arr, arrb, n);
	if (flag1 == 1)
	{
		cout << 6 << endl;
		return 0;
	}
	cout << 7 << endl;
	return 0;
}