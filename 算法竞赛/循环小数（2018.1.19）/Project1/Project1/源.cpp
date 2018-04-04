#include<iostream>
#include<string>
using namespace std;

string toString(int a, int b)
{
	if (a > b) {
		a = a % b;
	}
	string s = "";
	int yu = a % b;
	s += ((a * 10 / b) + '0');
	a = (a * 10) % b;
	for (int i = 1; i < 100; i++)
	{
		if (a == yu) {
			break;
		}
		s += ((a * 10 / b) + '0');
		a = (a * 10) % b;
	}
	cout << s.length() << endl;
	return "0." + s;
}

int main()
{
	string s;
	int a, b, max;
	cin >> a >> b;
	s = toString(a, b);
	cout << s << endl;
	return 0;
}