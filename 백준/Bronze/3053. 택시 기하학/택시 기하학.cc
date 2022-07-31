#include <iostream>
#define PI 3.141592653589793
using namespace std;

int main() {
	double r;
	cin >> r;
	cout << fixed;
	cout.precision(6);
	cout << r * r * PI << endl << 2 * r * r << endl;
}