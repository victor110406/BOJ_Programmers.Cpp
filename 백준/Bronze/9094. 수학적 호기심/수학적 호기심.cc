#include <iostream>

using namespace std;

int main() {

	int cnt, n, m, N;
	cin >> N; 
	while (N--)
	{
		cnt = 0;
		cin >> n >> m;
		for (int i = 1; i < n; i++) 
		{
			for (int j = i + 1; j < n; j++)
			{
				if (!((i * i + j * j + m) % (i * j))) {
					cnt++;
				}
			}
		}
		cout << cnt << '\n';
	}
	return 0;
}