#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int N, sum = 0, a, b;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> a >> b;
		sum += a * b;
	}
	cout << sum;

	return 0;
}