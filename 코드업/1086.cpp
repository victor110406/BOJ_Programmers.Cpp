#include<iostream>
using namespace std;

int main() {

	long long int w, h, b;
	cin >> w >> h >> b;
	cout << fixed;
	cout.precision(2);

	cout << double(w * h * b) / 8 / 1024 / 1024 << " " << "MB";


	return 0;
}