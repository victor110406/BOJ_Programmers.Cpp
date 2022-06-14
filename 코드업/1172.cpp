#include<iostream>
using namespace std;

int main()
{
	int a[3] = {};
	for (int i = 0; i < 3; i++) {
		cin >> a[i];
	}

	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 2; j++)
			if (a[j] > a[j + 1])
			{
				swap(a[j], a[j + 1]);
			}

	for (int i = 0; i < 3; i++) {
		cout << a[i] << " ";
	}

	return 0;
}