#include<iostream>
#define maxn 100500
long arr1[maxn], arr2[maxn];
using namespace std;

int main() {
	int n, m, sum2 = 0, sum1 = 0;
	int num = 0, j = 0, k;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> arr1[i];
	}
	for (int i = 0; i < m; i++) {
		cin >> arr2[i];
	}
	for (k = 0; k < m; k++) {
		sum2 += arr2[k];
		for (; j < n; j++) {
			sum1 += arr1[j];
			if (sum1 == sum2) {
				num++;
				sum1 = sum2 = 0;
				j++;
				break;
			}
			else if (sum1 > sum2) {
				sum1 -= arr1[j];
				break;
			}
		}
	}
	cout << num << endl;
	return 0;
}