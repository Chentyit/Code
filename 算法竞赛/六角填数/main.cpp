#include <iostream>
using namespace std; 

int six[13] = {0, 1, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3};
int flag[13] = {0, 1, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0};

void dfs(int n){
	if(n == 1 || n == 2 || n == 12){
		dfs(n + 1);
		return;
	}
	if(n > 12){
		int sum[6];
		sum[0] = six[1] + six[3] + six[6] + six[8];
		sum[1] = six[1] + six[4] + six[7] + six[11];
		sum[2] = six[8] + six[9] + six[10] + six[11];
		sum[3] = six[2] + six[3] + six[4] + six[5];
		sum[4] = six[2] + six[6] + six[9] + six[12];
		sum[5] = six[5] + six[7] + six[10] + six[12];
		for(int i = 1; i < 6; i++) {
			if(sum[i] != sum[i - 1]){
				return;
			}
		}
		cout << six[6] << endl;
		return;
	}
	for(int i = 1; i < 13; i++) {
		if(!flag[i]){
			flag[i] = 1;
			six[n] = i;
			dfs(n + 1);
			flag[i] = 0;
		}
	}
}

int main(int argc, char** argv) {
	dfs(1);
	return 0;
}
