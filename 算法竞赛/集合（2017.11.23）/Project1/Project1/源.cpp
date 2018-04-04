#include<iostream>
using namespace std;

int main()
{
	int zimu[26];
	int n, i = 0;
	char c;
	cin >> n;
	while (n)
	{
		cin >> c;
		zimu[c - 'a'] = 1;
		n--;
	}
	while (cin >> c)
	{
		if (zimu[c - 'a'] == 1)
			i++;
		cout << i << endl;
	}
	cout << i << endl;
	return 0;
}