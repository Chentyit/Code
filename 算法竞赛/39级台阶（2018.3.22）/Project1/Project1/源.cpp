#include<iostream>
using namespace std;

int sum = 0;
void Check(int bu) {
	if (bu % 2 == 0) {
		sum++;
	}
}
void dfs(int bushu, int i) {
	if (i == 39) {
		Check(bushu);
		return;
	}
	else if (i > 39) {
		return;
	}
	dfs(bushu + 1, i + 1);
	dfs(bushu + 1, i + 2);
}
int main() {
	dfs(0, 0);
	cout << sum << endl;
	return 0;
}