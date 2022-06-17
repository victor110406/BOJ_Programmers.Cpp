#include <iostream>
#include <vector>
#include <string>
#include <iterator>
#include <algorithm>
using namespace std;

int main() {
	int N, result;
	int studentNumber = 1;
	vector<int>ve;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> result;
		ve.push_back(result);
	}
	for (int i = 0; i < ve.size(); i++) {
		if (ve[i] == studentNumber) {
			ve.erase(ve.begin() + i);
			studentNumber++;
			i -= 2;
		}
		if (i == -2) {
			i++;
		}
	}
	if (ve.empty()) {
		cout << "Nice" << endl;
	}
	else {
		cout << "Sad" << endl;
	}

	return 0;
}