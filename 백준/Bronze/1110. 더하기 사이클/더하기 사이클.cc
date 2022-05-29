#include<iostream>

using namespace std;

int main()
{
	int N, count = 0;
	cin >> N;
	int sum = N;
	while (1) {
		N = (N % 10) * 10 + (((N / 10) + (N % 10)) % 10);
		count++;
		if (N == sum) {
			cout << count;
			break;
		}
	}
	
	return 0;
}