#include<iostream>
#include<string>
using namespace std;

void Length(string *s, int n)
{
	string k;
	for(int i = 0; i < n-1; i++)
		for(int j = i; j< n;j++)
			if (s[i] > s[j])
			{
				k = s[j];
				s[j] = s[i];
				s[i] = k;
			}
	for (int i = 0; i < n - 1; i++)
	{
		if (s[i] != s[i + 1])
			cout << s[i] << endl;
		else
			continue;
	}
	cout << s[n - 1] << endl;
}

void Sort(string *s, int n)
{
	string k;
	for (int i = 0; i < n - 1; i++)
		for (int j = i; j< n; j++)
			if (s[i].length() > s[j].length())
			{
				k = s[j];
				s[j] = s[i];
				s[i] = k;
			}
	for (int i = 0; i < n - 1; i++)
	{
		if (s[i].length() != s[i + 1].length())
			cout << s[i] << endl;
		else
			continue;
	}
	cout << s[n - 1] << endl;
}

int main()
{
	string *s;
	int n, flag = 1;
	cin >> n;
	s = new string[n];
	for (int i = 0; i < n; i++)
	{
		cin >> s[i];
	}
	for (int j = 0; j < n-1; j++)
	{
		if (s[j].length() != s[j + 1].length())
		{
			flag = 0;
			break;
		}
	}
	if (flag == 1)
		Length(s, n);
	else
		Sort(s, n);
	return 0;
}