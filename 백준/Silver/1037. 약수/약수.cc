#include<iostream>

using namespace std;

int main() { 
	int n, s;
	long long min, max;
	cin >> n >> s;
	min = max = s;
	while (--n) {
		cin >> s;
		if (s < min) { 
			min = s; 
		}
		if (s > max) { 
			max = s; 
		}
	} 
	cout << min * max;

	return 0;
}