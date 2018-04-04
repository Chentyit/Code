#include<iostream>
using namespace std;

int** input(int **a)
{
	a = new int*[9];
	for (int i = 0; i < 9; i++)
	{
		a[i] = new int[9];
		for (int j = 0; j < 9; j++)
		{
			cin >> a[i][j];
		}
	}
	return a;
}

void verify(int **a)
{
	int sumr = 0, sumc = 0;
	int ma = a[0][0];
	for (int i = 0; i < 9; i++)
	{
		if (a[0][0] == a[0][1])
		{
			cout << "Wrong" << endl;
			return;
		}
		for (int j = 0; j < 9; j++)
		{
			sumr += a[i][j];
			sumc += a[j][i];
		}
		if (sumr == 45 && sumc == 45)
		{
			sumr = sumc = 0;
		}
		else
		{
			cout << "Wrong" << endl;
			return;
		}
	}
	for (int i = 0, j = 0; i < 9; i += 3, j += 3)
	{
		for (int k = i; k < i + 3; k++)
		{
			for (int z = j; z < j + 3; z++)
			{
				sumr += a[k][z];
			}
		}
		if (sumr == 45)
		{
			sumr = sumc = 0;
		}
		else
		{
			cout << "Wrong" << endl;
			return;
		}
	}
	if (sumr == 0 && sumc == 0)
		cout << "Right" << endl;
	else
		cout << "Wrong" << endl;
}

int main()
{
	int ***a, n;
	cin >> n;
	a = new int**[n];
	for (int i = 0; i < n; i++)
	{
		a[i] = input(a[i]);
	}
	for (int i = 0; i < n; i++)
	{
		verify(a[i]);
	}
	return 0;
}