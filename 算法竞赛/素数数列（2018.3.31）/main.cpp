#include<iostream>
using namespace std;

int a[1000000];

bool judge(int n) {
	for(int i = 2; i < n ; i++) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}

int main(int argc, char** argv) {
	for(int i = 2; i < 65536; i++) {
		if(judge(i)) {
			a[i] = 1;
		}
	}
	for(int i = 1; i < 10000; i++){
		for(int j = 2; j < 100000; j++) {
			int count;
			for(count = 1; count <= 10; count++) {
				if(a[j + count * i] != 1){
					break;
				}
			}
			if(count == 10){
				cout << i <<endl;
				return 0;
			}
		}
	}
	return 0;
}
