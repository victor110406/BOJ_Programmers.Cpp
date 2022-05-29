#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int a[10], sum = 0;
	bool check = true;
	for (int i = 0; i < 9; i++) {
		cin >> a[i];
		sum += a[i];
	}

	for (int i = 0; i < 8; i++) {
		if (check == false) {
			break;
		}
		for (int j = i + 1; j < 9; j++) {
			if (sum - a[i] - a[j] == 100) {
				a[i] = 0;
				a[j] = 0;
				check = false;
				break;
			}
		}
	}
	sort(a, a + 9);

	for (int i = 0; i < 9; i++) {
		if (a[i] != 0) {
			cout << a[i] << '\n';
		}
	}

	return 0;
}