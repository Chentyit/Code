#include<iostream>
#include<string>
using namespace std;

int main()
{
	char Puzzle[5][5] = { 
		{'T', 'R', 'G', 'S', 'J'}, 
		{'X' ,'D', 'O', 'K', 'I'}, 
		{'M', ' ', 'V', 'L', 'N'},
		{'W', 'P', 'A', 'B', 'E'}, 
		{'U', 'Q', 'H', 'C', 'F'} 
	};
	char c;
	string s1;
	getline(cin, s1);
	int n = s1.length(), ki = 0, kj = 0;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (Puzzle[i][j] == ' ')
			{
				ki = i;
				kj = j;
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		if (s1[i] != '0')
		{
			switch (s1[i])
			{
			case 'A':
				c = Puzzle[ki - 1][kj];
				Puzzle[ki - 1][kj] = Puzzle[ki][kj];
				Puzzle[ki][kj] = c;
				ki -= 1;
				break;
			case 'B':
				c = Puzzle[ki + 1][kj];
				Puzzle[ki + 1][kj] = Puzzle[ki][kj];
				Puzzle[ki][kj] = c;
				ki += 1;
				break;
			case 'L':
				c = Puzzle[ki][kj - 1];
				Puzzle[ki][kj - 1] = Puzzle[ki][kj];
				Puzzle[ki][kj] = c;
				kj -= 1;
				break;
			case 'R':
				c = Puzzle[ki][kj + 1];
				Puzzle[ki][kj + 1] = Puzzle[ki][kj];
				Puzzle[ki][kj] = c;
				kj += 1;
				break;
			default:break;
			}
		}
		else
		{
			break;
		}
	}
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << Puzzle[i][j];
		}
		cout << endl;
	}
	return 0;
}