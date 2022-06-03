#include <iostream>
#include <string>
using namespace std;

int main() {
	int N, Adrian_n = 0, Bruno_n = 0, Goran_n = 0, max = 0;
	char Adrian[3] = { 'A','B','C' };
	char Bruno[4] = { 'B','A','B','C'};
	char Goran[6] = { 'C','C','A','A','B','B'};
	string str;
	cin >> N >> str;
	int j = 0, k = 0, h = 0;
	for (int i = 0; i < N; i++) {
		if (str[i] == Adrian[j]) {
			Adrian_n++;
			if (Adrian_n > max) {
				max = Adrian_n;
			}
		}
		if (str[i] == Bruno[k]) {
			Bruno_n++;
			if (Bruno_n > max) {
				max = Bruno_n;
			}
		}
		if (str[i] == Goran[h]) {
			Goran_n++;
			if (Goran_n > max) {
				max = Goran_n;
			}
		}
		j++, k++, h++;
		if (j == 3) {
			j = 0;
		}
		if (k == 4) {
			k = 0;
		}
		if (h == 6) {
			h = 0;
		}
	}
	cout << max << endl;
	if (max == Adrian_n) {
		cout << "Adrian" << endl;
	}
	if (max == Bruno_n) {
		cout << "Bruno" << endl;
	}
	if (max == Goran_n) {
		cout << "Goran" << endl;
	}
	return 0;
}