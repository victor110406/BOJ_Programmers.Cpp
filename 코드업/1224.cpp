#include<iostream>
using namespace std;

int main() {

	float num1, num2, num3, num4;
	cin >> num1 >> num2 >> num3 >> num4;

	float a, b;
	a = num1 / num2;
	b = num3 / num4;

	if (a > b) {
		cout << ">";
	}
	else if (a == b) {
		cout << "=";
	}
	else {
		cout << "<";
	}

	return 0;
}