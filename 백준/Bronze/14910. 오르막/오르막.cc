#include <iostream>

using namespace std; 

int main() { 
	int N, min = -1000001;
	while (1) {
		cin >> N;
		if (cin.eof() == true) {
			break;
		}
		if (N >= min) {
			min = N;
			continue;
		}
		else {
			cout << "Bad";
			return 0;
		}
	}
	cout << "Good";

	return 0;
}