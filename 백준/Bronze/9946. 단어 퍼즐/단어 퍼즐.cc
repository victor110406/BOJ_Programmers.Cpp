#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
	string str, str1;
	int count = 1;
	while (cin >> str >> str1) {
		if (str == "END" && str1 == "END") {
			break;
		}
		sort(str.begin(), str.end());
		sort(str1.begin(), str1.end());
		cout << "Case " << count << ": ";
		if (str == str1) {
			cout << "same" << endl;
		}
		else {
			cout << "different" << endl;
		}
		count++;
	}
	return 0;
}