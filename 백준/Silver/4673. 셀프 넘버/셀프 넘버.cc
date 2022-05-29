#include<iostream>
#define SIZE 10001

using namespace std;

int inspect(int a);
void output();
void check();

int arr[SIZE], ck;

int main() {

	check();
	output();

	return 0;
}

int inspect(int a)
{
	int temp = a;
	while (a > 0) {
		temp += a % 10;
		a /= 10;
	}
	return temp;
}

void output() {
	for (int i = 1; i < SIZE; i++)
	{
		if (arr[i] != 1)
			cout << i << '\n';
	}
}

void check() {
	for (int i = 1; i < SIZE; i++)
	{
		ck = inspect(i);
		if (ck < SIZE)
			arr[ck] = 1;
	}
}