#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int N;
	bool check = false;
	string str;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> str;
		if (str == "anj") {
			check = true;
		}
	}
	if (check) {
		cout << "뭐야;";
	}
	else {
		cout << "뭐야?";
	}

	return 0;
}