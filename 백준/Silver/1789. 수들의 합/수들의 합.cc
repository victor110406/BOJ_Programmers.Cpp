#include <iostream>

using namespace std;

int main()
{
	long long int S;
	cin >> S;

	int num = 1, count = 0;
	long long sum = 0;

	while (1) {
		sum += num;
		if (sum > S) {
			break;
		}
		count++;
		num++;
	}
	cout << count;

	return 0;
}