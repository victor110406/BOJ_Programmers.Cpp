#include <iostream>
#include <string>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);

	int N;
	string str;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> str;
		cout << "String #" << i + 1 << '\n';
		for (int i = 0; i < str.length(); i++) {
			if (str[i] == 'Z') {
				cout << 'A';
			}
			else {
				cout << char(str[i] + 1);
			}
		}
		cout << '\n' << '\n';
	}
	return 0;
}