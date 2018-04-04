#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	char s1[6], s2[6], c;
	int sum1 = 1, sum2 = 1;
	cin >> s1;
	cin.clear();
	cin >> s2;
	for (int i = 0; i < strlen(s1); i++)
	{
		sum1 *= (s1[i] - 'A' + 1);
	}
	for (int j = 0; j < strlen(s2); j++)
	{
		sum2 *= (s2[j] - 'A' + 1);
	}
	if (sum1%47 == sum2%47)
		cout << "GO" << endl;
	else
		cout << "STAY" << endl;
	return 0;
}