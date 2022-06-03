#include <iostream>
#include <string>
using namespace std;

int main() {
	int N, max = 0;
	cin >> N;
	for (int i = 0; i < N; i++) {
		int number[7] = {};
		int a[4], two = 0, result = 0, one = 0;
		for (int j = 0; j < 4; j++) {
			cin >> a[j];
			number[a[j]]++;
		}
		for (int j = 1; j < 7; j++) {
			if (number[j] == 4) {
				result += 50000 + j * 5000;
				if (result > max) {
					max = result;
				}
				break;
			}
			else if (number[j] == 3) {
				result += 10000 + j * 1000;
				if (result > max) {
					max = result;
				}
				break;
			}
			else if (number[j] == 2) {
				two++;
			}
			else if (number[j] == 1) {
				one++;
			}
		}
		if (two == 2) {
			for (int j = 1; j < 7; j++) {
				if (number[j] == 2) {
					result += j * 500;
				}
			}
			result += 2000;
			if (result > max) {
				max = result;
			}
		}
		else if (two == 1) {
			for (int j = 1; j < 7; j++) {
				if (number[j] == 2) {
					result += 1000 + j * 100;
				}
				if (result > max) {
					max = result;
				}
			}
		}
		if (one == 4) {
			int h = 0;
			for (int j = 1; j < 7; j++) {
				if (number[j] == 1) {
					if (j > h) {
						h = j;
					}
				}
			}
			result += h * 100;
			if (result > max) {
				max = result;
			}
		}
	
	}
	cout << max;

	return 0;
}