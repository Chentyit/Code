#include<iostream>
#include<string>
#include<algorithm>

using namespace std;
long long f[41][41] = { 0 };
long long w[41][41];
string s;
int n, k;

int main()
{

	cin >> s;
	cin >> k;
	k = k - 1;
	n = s.size();
	s = '*' + s;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			f[i][j] = 9999999;
		}
	}
	for (int i = 1; i <= n; i++)
	{
		for (int j = i; j <= n; j++)
			w[i][j] = w[i][j - 1] * 10 + (int)(s[j] - '0');
	}
	for (int i = 1; i <= n; i++)
	{
		f[i][0] = w[1][i];
	}
	for (int k1 = 1; k1 <= k; k1++)
	{
		for (int i = k1 + 1; i <= n; i++)
		{
			for (int j = k1; j<i; j++)
				f[i][k1] = min(f[i][k1], f[j][k1 - 1] + w[j + 1][i]);
		}
	}
	cout << f[n][k] << endl;
	return 0;
}