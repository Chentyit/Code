#include<iostream>
#define maxn 101
using namespace std;

int main()
{
	int n, a[maxn], b[maxn];
	int kase = 0;
	while ((cin >> n) && n)
	{
		cout << "Game " << ++kase << ":\n";
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		for (;;)
		{
			int A = 0, B = 0;
			for (int i = 0; i < n; i++)
			{
				cin >> b[i];
				if (a[i] == b[i])
					A++;
			}
			if (b[0] == 0)
				break;
			for (int d = 1; d <= 9; d++)
			{
				int c1 = 0, c2 = 0;
				for (int i = 0; i < n; i++)
				{
					if (a[i] == d)
						c1++;
					if (b[i] == d)
						c2++;
				}
				if (c1 < c2)
					B += c1;
				else
					B += c2;
			}
			cout << "(" << A << "," << B-A << ")" << endl;
		}
	}
	return 0;
}