#include<iostream>
#include<queue>
using namespace std;

int main()
{
	int n;
	queue<int>a;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		a.push(i + 1);
	}
	while (a.size() != 2)
	{
		cout << a.front() << ' ';
		a.pop();
		a.push(a.front());
		a.pop();
	}
	cout << a.front() << ' ';
	a.pop();
	cout << a.front() << ' ';
	a.pop();
	cout << endl;
	return 0;
}