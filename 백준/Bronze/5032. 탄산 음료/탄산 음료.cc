#include <iostream>

using namespace std;

int main() {

	int e, f, c, count = 0;
	int bottle;
	cin >> e >> f >> c;
	bottle = (e + f) / c;
	bottle += ((e + f) % c);
	count = (e + f) / c;
	while (bottle >= c) {
		count += (bottle / c);
		bottle = (bottle / c) + (bottle % c);
	}
	cout << count;

	return 0;
}