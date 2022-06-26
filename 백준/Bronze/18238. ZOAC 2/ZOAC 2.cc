#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	string n;
	int curCnt1 = 0, curCnt2 = 0;
	int result = 0;
	char curLocation = 'A';
	cin >> n;
	for (int i = 0; i < n.size(); i++)
	{
		curCnt1 = abs(n[i] - curLocation); 
		curCnt2 = 26 - curCnt1;
		result += min(curCnt1, curCnt2);
		curLocation = n[i]; 
	}
	cout << result << "\n";
	return 0;
}