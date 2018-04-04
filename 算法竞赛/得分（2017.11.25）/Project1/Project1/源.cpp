#include<iostream>
#include<string>
using namespace std;

int main()
{
	string s;
	int sum = 0, k = 0, v = 0;
	getline(cin, s);
	for (int i = 0; i <= s.length(); i++)
	{
		if (s[i] == 'O')
		{
			k++;
			v += k;
		}
		else if (s[i] == 'X' || s[i] == NULL)
		{
			sum += v;
			k = 0;
			v = 0;
		}
	}
	cout << sum << endl;
	return 0;
}