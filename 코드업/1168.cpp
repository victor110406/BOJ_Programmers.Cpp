#include<iostream>
using namespace std;

int main()
{
	int a, b, age = 0;
	cin >> a >> b;
	if (b == 1 || b == 2) {
		age = 2012 - (a / 10000 + 1900);
	}
	else {
		age = 2012 - (a / 10000 + 2000);
	}
	cout << age + 1;

	return 0;
}