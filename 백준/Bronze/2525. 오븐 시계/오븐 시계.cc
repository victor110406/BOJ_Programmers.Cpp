#include<iostream>

using namespace std;

int main()
{
	int h, m, n;

	cin >> h >> m >> n;

	int sum = m + n;

	m = sum % 60; 
	h = h + sum / 60; 

	if (h == 24) 
	{
		h = 0;
	}
	else if (h > 23) 
	{
		h = h - 24;
	}
	cout << h << " " << m;

	return 0;
}
