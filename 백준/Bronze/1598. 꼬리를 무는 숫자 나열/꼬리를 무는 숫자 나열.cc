#include <iostream>
using namespace std;

int main() {
	int a, b, w = 0, h = 0;
	cin >> a >> b;

	w = (b - 1) / 4 - (a - 1) / 4;
	h = (b + 3) % 4 - (a + 3) % 4; 

	if (w < 0) {
		w = -w;
	}
	if (h < 0) { 
		h = -h; 
	}
	cout << w + h;

	return 0;
}