#include<iostream>
using namespace std;

int main() {

	int hour, minute;
	cin >> hour >> minute;

	hour += 24;
	minute = minute + hour * 60;
	minute -= 30;
	hour = minute / 60;
	hour = hour % 24;
	minute = minute % 60;

	cout << hour << " " << minute;

	return 0;
}