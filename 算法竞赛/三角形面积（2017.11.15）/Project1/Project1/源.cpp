#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main()
{
	int a, b, c;
	float p, S;
	cin >> a >> b >> c;
	p = static_cast<float>(a + b + c) / 2;
	S = sqrt(p*(p - a)*(p - b)*(p - c));
	if (S > 0)
		cout << fixed << setprecision(2) << S << endl;
	else
		cout << "No answer" << endl;
	return 0;
}