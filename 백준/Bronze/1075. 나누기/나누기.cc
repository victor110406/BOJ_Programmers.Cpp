#include <iostream>

using namespace std;

int main()
{
	int N, F;
	cout.width(2);
	cout.fill('0');
	cin >> N >> F;
	for (int i = 0; i < 100; i++) {
		N = (N / 100) * 100;
		N += i;
		if (N % F == 0) {
			cout << i << '\n';
			break;
		}
	}

}