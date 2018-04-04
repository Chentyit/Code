#include<iostream>
#include<cstring>
#include<vector>
#include<string>
using namespace std;

vector<string> input(vector<string>s, int m)
{
	string x;
	for (int i = 0; i < m; i++)
	{
		cin >> x;
		s.push_back(x);
	}
	return s;
}

int Compare(string s1, string s2, int n) 
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		if (s1[i] != s2[i])
		{
			sum++;
		}
	}
	return sum;
}

void Hamming(vector<string>s, int m, int n, int *a)
{
	int sum = 0;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < m; j++)
		{
			sum += Compare(s[i], s[j], n);
		}
		a[i] = sum;
		sum = 0;
	}
}

int Min(int *a, int m)
{
	int min = a[0];
	for (int i = 1; i < m; i++)
	{
		if (a[i] < min)
		{
			min = a[i];
		}
	}
	return min;
}

string FindMin(vector<string>s, int m, int min, int *a)
{
	string c;
	for (int i = 0; i < m; i++)
	{
		if (a[i] == min)
		{
			c = s[i];
			break;
		}
	}
	for (int i = 0; i < m; i++)
	{
		if (a[i] == min && s[i] < c)
		{
			c = s[i];
		}
	}
	return c;
}

int main()
{
	int m, n, *a, min;
	vector<string>s;
	string x, c;
	cin >> m >> n;
	a = new int[m];
	memset(a, 0, sizeof(a));
	s = input(s, m);
	Hamming(s, m, n, a);
	min = Min(a, m);
	c = FindMin(s, m, min, a);
	cout << c << " " << min << endl;
	return 0;
}