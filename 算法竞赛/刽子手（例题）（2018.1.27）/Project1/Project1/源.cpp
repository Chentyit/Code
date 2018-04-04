#include<iostream>
#include<cstring>
#define maxn 100
using namespace std;

int Left, Chance;
char s[maxn], s2[maxn];
int win, lose;

void guess(char ch) {
	int bad = 1;
	for (int i = 0; i < strlen(s); i++) {
		if (s[i] == ch) {
			Left--;
			s[i] = ' ';
			bad = 0;
		}
	}
	if (bad)
		Chance--;
	if (!Chance)
		lose = 1;
	if (!Left)
		win = 1;
}

int main() {
	int rnd;
	while ((cin >> rnd >> s >> s2) && rnd != -1) {
		cout << "Round" <<  rnd;
		win = lose = 0;
		Left = strlen(s);
		Chance = 7;
		for (int i = 0; i < strlen(s2); i++) {
			guess(s2[i]);
			if (win || lose) {
				break;
			}
		}
	}
	if (win)
		cout << "You win.\n";
	else if (lose)
		cout << "You lose.\n";
	else
		cout << "You chickened out.\n";
	return 0;
}