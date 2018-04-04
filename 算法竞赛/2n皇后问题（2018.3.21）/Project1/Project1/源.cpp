#include<iostream>
using namespace std;

int n, **flag;
char **arr;

void dfs(int r, int c, int id) {
	if (r < 0 || r >= n || c < 0 || c >= n) {
		return;
	}
	if (flag[r][c] > 0 || arr[r][c] != '1') {
		return;
	}
	flag[r][c] = id;
	for (int dr = -1; dr <= 1; dr++) {
		for (int dc = -1; dc <= 1; dc++) {
			int nr = dr + r, nc = dc + c;
			if ((dr != 0 || dc != 0) && (nr != r || nc != c)) {
				dfs(nr, nc, id);
			}
		}
	}
}

int main() {
	cin >> n;
	arr = new char*[n];
	flag = new int*[n];
	for (int i = 0; i < n; i++) {
		arr[i] = new char[n];
		flag[i] = new int[n];
		for (int j = 0; j < n; j++) {
			cin >> arr[i][j];
			flag[i][j] = 0;
		}
	}
	int cntblack = 1, cntwhite = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (flag[i][j] == 0 || arr[i][j] == '1') {
				dfs(i, j, cntblack + 2);
			}
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << flag[i][j];
		}
		cout << endl;
	}
	return 0;
}