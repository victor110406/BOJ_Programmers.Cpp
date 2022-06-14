#include<iostream>
using namespace std;

int main() {

	int a;
	cin >> a;
	cout << fixed;
	cout.precision(3);
	cout << float(9) / 5 * a + 32;

	return 0;
}