#include<iostream>
using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	cout << a;
	cout.width(2);
	cout.fill('0');
	cout << b;
	cout.width(3);
	cout.fill('0');
	cout << c;


	return 0;
}