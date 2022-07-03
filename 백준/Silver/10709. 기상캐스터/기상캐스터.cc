#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
	int N, M;
	cin >> N >> M;
	string str;
	vector<string> ve;
	for (int i = 0; i < N; i++) {
		cin >> str;
		ve.push_back(str);
	}
	for (int i = 0; i < N; i++) {
		bool check = true;
		int count = 1;
		for (int j = 0; j < M; j++) {
			if (check && ve[i][j] == '.') {
				cout << -1 << " ";
			}
			else if (ve[i][j] == 'c') {
				cout << 0 << " ";
				check = false;
				count = 1;
 			}
			else if (ve[i][j] == '.') {
				cout << count++ << " ";
			}
		}
		cout << endl;
	}
	return 0;
}