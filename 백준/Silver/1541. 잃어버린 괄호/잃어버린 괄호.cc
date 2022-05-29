#include<iostream>
#include<string.h>

using namespace std;

int main() {

	int temp = 0, sum = 0;
	bool check = 0;
	char str[51];
	cin >> str;

	for (int i = 0; i <= strlen(str); i++)
	{

		if (str[i] == '+' || str[i] == '-' || i == strlen(str)) {
			if (check == 0) {
				sum += temp;
				temp = 0;
			}
			else {
				sum -= temp;
				temp = 0;
			}

			if (str[i] == '-') {
				check = 1;
			}

		}
		else {
			temp *= 10;
			temp += str[i] - '0';
		}
	}
	cout << sum;

	return 0;
}