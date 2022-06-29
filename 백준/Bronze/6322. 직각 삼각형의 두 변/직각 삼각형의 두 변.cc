#include<iostream>
#include<string>
#include<algorithm>
#include<math.h>
using namespace std;

int main() {
	double a, b, c;
	int i = 1;
	cout << fixed;
	cout.precision(3);
	while (cin >> a >> b >> c) {
		if (a == 0 && b == 0 && c == 0) {
			break;
		}
		cout << "Triangle #" << i << endl;
		if(a == -1){
			if (b >= c) {
				cout << "Impossible." << endl;
			}
			else {
				cout << "a = " << sqrt(c * c - b * b) << endl;;
			}
		}
		else if (b == -1) {
			if (a >= c) {
				cout << "Impossible." << endl;
			}
			else {
				cout << "b = " << sqrt(c * c - a * a) << endl;;
			}
		}
		else if (c == -1) {
			cout << "c = " << sqrt(a * a + b * b) << endl;;
		}
		i++;
		cout << endl;
	}
	return 0;
}
