#include <iostream>

using namespace std;

int main() {
	int x, y, w, h, sum;
	cin >> x >> y >> w >> h;

	sum = x;
	if (w - x < sum)
		sum = w - x;
	if (y < sum)
		sum = y;
	if (h - y < sum)
		sum = h - y;

	cout << sum << endl;
}