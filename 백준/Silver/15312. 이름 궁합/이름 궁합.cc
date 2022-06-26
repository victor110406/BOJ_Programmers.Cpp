#include <iostream>
#include <vector>
#include <string>
#include <iterator>
using namespace std;

int alpha[26] = { 3, 2, 1, 2, 3, 3, 2, 3, 3, 2, 2, 1, 2, 2, 1, 2, 2, 2, 1, 2, 1, 1, 1, 2, 2, 1 };

int main(){

	string A, B;
	cin >> A >> B;
	vector<int> ve;
	for (int i = 0; i < A.size(); i++){
		ve.push_back(alpha[A[i] - 'A']);
		ve.push_back(alpha[B[i] - 'A']);
	}

	while (1) {
		vector<int> temp;
		for (int i = 0; i < ve.size() - 1; i++) {
			temp.push_back((ve[i] + ve[i + 1]) % 10);
		}
		ve = temp;
		if (ve.size() == 2) {
			break;
		}
	}
	copy(ve.begin(), ve.end(), ostream_iterator<int>(cout, ""));

	return 0;
}