#include <iostream>
using namespace std;

int num = 0, sum = 0;

void dfs(int n){
	if(n == 13){
		if(sum == 13){
			num++;
		}
		return;
	}
	else if(sum > 13 || n > 13){
		return;
	}
	for(int i = 0; i <= 4; i++){
		sum += i;
		dfs(n + 1);
		sum -= i;
	}
}

int main(int argc, char** argv) {
	dfs(0);
	cout << num << endl;
	return 0;
}
