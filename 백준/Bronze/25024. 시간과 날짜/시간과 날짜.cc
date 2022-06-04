#include <iostream>
#include <string>

using namespace std;

int month(int a);

int main() {
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		int x, y;
		cin >> x >> y;
		if (x >= 0 && x <= 23 && y >= 0 && y <= 59) {
			cout << "Yes ";
		}
		else {
			cout << "No ";
		}
		if (x >= 1 && x <= 12 && y >=1 && y <= month(x)) {
			cout << "Yes" << endl;
		}
		else {
			cout << "No" << endl;
		}
	}
	return 0;
}

int month(int a) {
	switch (a) {
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		return 31;
	case 4:
	case 6:
	case 9:
	case 11:
		return 30;
	case 2:
		return 29;
	default:
		return 0;
	}
}