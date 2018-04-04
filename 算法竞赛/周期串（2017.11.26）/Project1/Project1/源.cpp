#include<iostream>
#include<string>
using namespace std;

int same(string s1, int i, int ans)
{
	for (int k = 0; k < s1.length(); k++)
	{
		if (s1[(i + k) % s1.length()] != s1[(ans + k) % s1.length()])
		{
			return 1;
		}
	}
	return 0;
}

int main()
{
	string s1;
	getline(cin, s1);
	int i, ans = 0, v = 1;
	if (s1.length() == 0)
	{
		cout << 0 << endl;
		return 0;
	}
	for (i = 1; i < s1.length(); i++)
	{
		if (same(s1, i, ans))
		{
			v++;
			continue;
		}
		else
		{
			break;
		}
	}
	cout << v << endl;
	return 0;
}