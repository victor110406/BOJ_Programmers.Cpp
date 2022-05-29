#include<iostream>

using namespace std;

int main() {

	int T, P, M, F, C;
	cin >> T;

	while (T--) {
		cin >> P >> M >> F >> C;
		int regular = (M / P);
		int noregular = (M / P) + ((M / P) * C) / F;
		int coupon = (M / P) * C;
		if (coupon >= F) {
			regular += (coupon - F) / (F - C) + 1;
		}
		cout << regular - noregular << endl;
	}
	return 0;
}