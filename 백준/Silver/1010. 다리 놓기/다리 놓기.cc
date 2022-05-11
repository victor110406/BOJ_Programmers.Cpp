#include<iostream>

using namespace std;

int main()
{
	int T, N, M;
	cin >> T;
	for (int i = 0; i < T; i++)
	{
		int sum = 1;
		cin >> N >> M;
		for (int j = 0; j < N; j++)
		{
			sum *= M - j;
			sum /= 1 + j;
		}
		cout << sum << '\n';
	}
}