#include<iostream>
using namespace std;

int main()
{
	char s;
	int j = 0;
	while (cin.get(s))
	{
		if (s == ' ')
			j++;
		else if (s >= 'a'&&s <= 'c')
			j = j + s - 'a' + 1;
		else if (s >= 'd'&&s <= 'f')
			j = j + s - 'd' + 1;
		else if (s >= 'g'&&s <= 'i')
			j = j + s - 'g' + 1;
		else if (s >= 'j'&&s <= 'l')
			j = j + s - 'j' + 1;
		else if (s >= 'm'&&s <= 'o')
			j = j + s - 'm' + 1;
		else if (s >= 'p'&&s <= 's')
			j = j + s - 'p' + 1;
		else if (s >= 't'&&s <= 'v')
			j = j + s - 't' + 1;
		else if (s >= 'w'&&s <= 'z')
			j = j + s - 'w' + 1;
	}
	cout << j << endl;
	return 0;
}