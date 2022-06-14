#include<iostream>
using namespace std;

int main() {

	int i, a, sum = 0;
	cin >> a;
	for (i = 1; ; i++)
	{
		sum += i;
		if (sum >= a)break;
	}
	cout << i;

	return 0;
}