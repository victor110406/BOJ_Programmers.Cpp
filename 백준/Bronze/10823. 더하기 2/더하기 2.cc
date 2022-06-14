#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
	string str, str1;
	int result = 0;
	while (getline(cin, str)) {
		for (int i = 0; i < str.size(); i++) {
			if (str[i] != ',') { 
				str1 += str[i];
			}
			else {
				result += stoi(str1);
				str1 = "";
			}
		}
	}
	result += stoi(str1);
	cout << result;
}