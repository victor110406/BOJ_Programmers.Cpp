#include <iostream>
#include <string>
using namespace std;

int main() {
	string str[3];
	unsigned long long sum = 0;
	for (int i = 0; i < 3; i++) {
		cin >> str[i];
	}
	for (int i = 0; i < 2; i++) {
		sum *= 10;
		if (str[i] == "black") sum += 0;
		else if (str[i] == "brown") sum += 1;
		else if (str[i] == "red") sum += 2;
		else if (str[i] == "orange") sum += 3;
		else if (str[i] == "yellow") sum += 4;
		else if (str[i] == "green") sum += 5;
		else if (str[i] == "blue") sum += 6;
		else if (str[i] == "violet") sum += 7;
		else if (str[i] == "grey") sum += 8;
		else if (str[i] == "white") sum += 9;
	}

	if (str[2] == "black") sum *= 1;
	else if (str[2] == "brown") sum *= 10;
	else if (str[2] == "red") sum *= 100;
	else if (str[2] == "orange") sum *= 1000;
	else if (str[2] == "yellow") sum *= 10000;
	else if (str[2] == "green") sum *= 100000;
	else if (str[2] == "blue") sum *= 1000000;
	else if (str[2] == "violet") sum *= 10000000;
	else if (str[2] == "grey") sum *= 100000000;
	else if (str[2] == "white") sum *= 1000000000;
	
	cout << sum;
	return 0;
}