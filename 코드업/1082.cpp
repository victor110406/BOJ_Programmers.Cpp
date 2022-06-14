#include<iostream>
using namespace std;

int main() {

	int a, i = 0;
	cin >> hex >> a;
	hex(cout);
	cout.setf(ios::uppercase);
	for (i = 1; i < 16; i++) {
		cout << a << "*" << i << "=" << a * i << endl;
	}
	return 0;
}