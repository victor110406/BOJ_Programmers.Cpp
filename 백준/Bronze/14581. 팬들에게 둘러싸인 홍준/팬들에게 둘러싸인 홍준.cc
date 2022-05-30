#include <iostream>
#include <string>

using namespace std;

int main() {

	string ID;
	cin >> ID;
	char em[6] = ":fan:";

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (i == 1 && j == 1) {
				cout << ":" << ID << ":";
			}
			else
				cout << em;
		}
		cout << "\n";
	}
}