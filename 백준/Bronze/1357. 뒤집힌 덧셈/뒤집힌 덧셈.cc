#include <iostream>

using namespace std;

int Rev(int a){
	int result = 0;
	while (a > 0) {
		result *= 10;
		result += (a % 10);
		a /= 10;
	}
	return result;
}

int main() {

	int X, Y, sum = 0;
	cin >> X >> Y;
	sum = Rev(X) + Rev(Y);
	cout << Rev(sum);

	return 0;
}