#include <iostream>
#include <string>
using namespace std;
int main() {
	int Month[] = { 0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334, 365 }, m, d;
	string Year[7] = { "Thursday", "Friday", "Saturday", "Sunday", "Monday", "Tuesday", "Wednesday" };
	cin >> m >> d;
	cout << Year[(Month[d - 1] + m - 1) % 7] << endl;
}