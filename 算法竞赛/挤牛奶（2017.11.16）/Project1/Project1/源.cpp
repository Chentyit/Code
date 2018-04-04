#include<iostream>
using namespace std;

struct Node {
	int begin, end;
};

int main()
{
	Node *a;
	long int n, begin = 1000000, last = 0, yes = 0, no = 0, sumy = 0, sumn = 0;
	string b(1000000, '0');
	cin >> n;
	a = new Node[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i].begin >> a[i].end;
		if (a[i].end > last)
			last = a[i].end;
		if (a[i].begin < begin)
			begin = a[i].begin;
		for (int j = a[i].begin; j < a[i].end; j++)
		{
			b[j] = '1';
		}
	}
	for (int i = begin; i <= last; i++)
	{
		if (b[i] == '1')
		{
			if (no > sumn)
			{
				sumn = no;
			}
			no = 0;
			yes++;
		}
		if (b[i] == '0')
		{
			if (yes > sumy)
			{
				sumy = yes;
			}
			yes = 0;
			no++;
		}
	}
	cout << sumy << ' ' << sumn << endl;
	return 0;
}