#include <iostream>
#include <string>

using namespace std;

int main() {
	int n, t;
	cin >> n >> t;
	int* pInt = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> pInt[i];
	}
	int i = 0;
	while (t >= pInt[i]) {
		t -= pInt[i];
		i++;
		if (i == n) {
			break;
		}
	}
	
	cout << i;

	delete[] pInt;
	return 0;
}
