#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int arr[50];
	for(int i = 1; i <= 49; i++){
		arr[i] = i;
	}
	for(int i = 1; i <= 47; i++) {
		for(int j = i + 2; j <= 49; j++){
			if((arr[i] * arr[i + 1] + arr[j] * arr[j + 1]) - (arr[i] + arr[i + 1] + arr[j] + arr[j + 1]) == 790){
				cout << arr[i] << endl;
			}
		}
	}
	return 0;
}
