#include <iostream>
#include <string>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);

	string str, str1;
	cin >> str;
	int length = str.length() - 1;
	int count = 0, result = 1, number = 0;
	for (int i = length; i >= 0; i--) {
		if (count == 3) {
			str1 = to_string(number) + str1;
			count = 0, result = 1, number = 0;
		}
		number += (str[i] - '0') * result;
		count++;
		result *= 2;
	}
	str1 = to_string(number) + str1;
	cout << str1 << '\n';

	return 0;
}