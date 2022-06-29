#include <iostream>
#include <string>
using namespace std;

int main()
{
	int R, C, N;
	long long RC = 0, CC = 0;
	cin >> R >> C >> N;
	RC = R / N;
	if (R % N != 0) {
		RC++;
	}
	CC = C / N;
	if (C % N != 0) {
		CC++;
	}
	cout << RC * CC;
	return 0;
}