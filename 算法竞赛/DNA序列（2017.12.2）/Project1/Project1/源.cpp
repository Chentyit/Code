#include<iostream>
#include<cstring>
#include<string>
#include<vector>
using namespace std;

char DNA[4] = { 'A', 'C', 'G', 'T' };

vector<string> Input(vector<string>str, int m)
{
	string s;
	for (int i = 0; i < m; i++)
	{
		cin >> s;
		str.push_back(s);
	}
	return str;
}

int Compare(string s, int *a)
{
	int len = s.length(), max = 0, k = 0;
	char c;
	for (int i = 0; i < len; i++)
	{
		c = s[i];
		switch (c) {
		case 'A': a[0]++; break;
		case 'C': a[1]++; break;
		case 'G': a[2]++; break;
		case 'T': a[3]++; break;
		default: break;
		}
	}
	max = a[0];
	for (int i = 1; i < len; i++)
	{
		if (a[i] > max)
		{
			max = a[i];
			k = i;
		}
	}
	return k;
}

string FindMin(vector<string>str, int m, int n)
{
	int a[5];
	memset(a, 0, sizeof(a));
	string s = "", k;
	for (int j = 0; j < n; j++)
	{
		for (int i = 0; i < m; i++)
		{
			s = s + str[i][j];
		}
		k = k + DNA[Compare(s, a)];
		memset(a, 0, sizeof(a));
		s = "";
	}
	return k;
}

int main()
{
	int m, n;
	string s;
	vector<string>str;
	cin >> m >> n;
	str = Input(str, m);
	s = FindMin(str, m, n);
	cout << s << endl;
	return 0;
}

/*
TATGATAC
TAAGCTAC
AAAGATCC
TGAGATAC
TAAGATGT
*/