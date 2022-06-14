#include<iostream>
using namespace std;

int main() {

	int time, goal;
	cin >> time >> goal;
	while (time < 90) {
		goal++;
		time += 5;
	}
	cout << goal;

	return 0;
}