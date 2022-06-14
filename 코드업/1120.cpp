#include<iostream>
using namespace std;

int main() {

	int a, b, c;
	cin >> a >> b >> c;
	cout << fixed;
	cout.precision(2);
	cout << float(a + b + c) / 3;


	return 0;
}