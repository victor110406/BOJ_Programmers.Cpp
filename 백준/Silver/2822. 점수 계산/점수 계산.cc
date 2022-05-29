#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	int* pInt = new int[8];
	int* pCheck = new int[8];
	int sum = 0;
	for (int i = 0; i < 8; i++) {
		cin >> pInt[i];
		pCheck[i] = pInt[i];
	}
	sort(pInt, pInt + 8);
	for (int i = 3; i < 8; i++) {
		sum += pInt[i];
	}
	cout << sum << '\n';

	for (int i = 0; i < 8; i++) {
		for (int j = 3; j < 8; j++) {
			if (pCheck[i]==pInt[j]) {
				cout << i + 1 << " ";
				continue;
			}
		}
	}

	delete[] pInt;
	delete[] pCheck;
	return 0;
}