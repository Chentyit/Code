#include<iostream>
using namespace std;

int main()
{
	int month[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 }, day[7] = { 0,0,0,0,0,0,0 };
	int n;
	static int p = 1;
	cin >> n;
	for (int i = 1900; i <= 1900 + n - 1; i++)
	{
		if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
			month[1] = 29;
		else
			month[1] = 28;
		for (int z = 0; z < 12; z++)
		{
			for (int j = 0; j < month[z]; j++)
			{
				if (j == 12)
				{
					switch (p)
					{
					case 1:day[0]++; break;
					case 2:day[1]++; break;
					case 3:day[2]++; break;
					case 4:day[3]++; break;
					case 5:day[4]++; break;
					case 6:day[5]++; break;
					case 7:day[6]++; break;
					}
				}
				p++;
				if (p == 8)
					p = 1;
			}
		}
	}
	cout << day[5] << " " << day[6] << " " << day[0] << " " << day[1]
		<< " " << day[2] << " " << day[3] << " " << day[4] << endl;
	return 0;
}