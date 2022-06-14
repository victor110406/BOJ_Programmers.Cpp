#include<iostream>
using namespace std;

int main() {

	int hour, second;
	cin >> hour >> second;
	if (second - 30 < 0) {
		second = second + 30;
		hour -= 1;
		if (hour < 0) {
			hour = 23;
		}
	}
	else {
		second -= 30;
	}

	cout << hour << " " << second;
	return 0;
}