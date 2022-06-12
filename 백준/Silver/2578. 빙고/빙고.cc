#include<iostream>
using namespace std;

int main() {
	int result;
	int BingoNumber[25] = {};
	int CheckNumber[25] = {};
	for (int i = 0; i < 25; i++) {
		cin >> result;
		BingoNumber[i] = result;
	}
	for (int i = 0; i < 25; i++) {
		cin >> result;
		CheckNumber[i] = result;
	}
	int Bingo = 0;
	int k = 0;
	while (1) {
		bool left = true, right = true;
		Bingo = 12;
		for (int i = 0; i < 5; i++) {
			for (int j = 0; j < 5; j++) {
				if (BingoNumber[i * 5 + j] != 0) {
					Bingo--;
					break;
				}
			}
			for (int j = 0; j < 5; j++) {
				if (BingoNumber[j * 5 + i] != 0) {
					Bingo--;
					break;
				}
			}
			if (left && BingoNumber[i * 6] != 0) {
				Bingo--;
				left = false;
			}
			if (right && BingoNumber[(i + 1) * 4] != 0) {
				Bingo--;
				right = false;
			}
		}
		if (Bingo >= 3) {
			break;
		}
		for (int i = 0; i < 25; i++) {
			if (CheckNumber[k] == BingoNumber[i]) {
				BingoNumber[i] = 0;
				break;
			}
		}
		k++;
	}
	cout << k;
	return 0;
}