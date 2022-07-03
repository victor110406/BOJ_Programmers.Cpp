#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
	int a, b, c;
	cin >> a >> b >> c;
	if (c * 2 > a + b) {
		cout << a + b;
	}
	else if (c * 2 <= a + b) {
		cout << a + b - (c * 2);
	}

	return 0;
}