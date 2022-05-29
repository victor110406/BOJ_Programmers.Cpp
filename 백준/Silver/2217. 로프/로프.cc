#include <iostream>
#include <algorithm>

using namespace std;

int N;
short a[100000];

int main()
{	
	int max = 0;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> a[i];
	}

	sort(a, a + N);
	for (int i = 0; i < N; i++) {
		if (a[i] * (N - i) > max) {
			max = a[i] * (N - i);
		}
	}
	cout << max;

	return 0;
}