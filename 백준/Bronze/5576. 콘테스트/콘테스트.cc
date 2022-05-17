#include<iostream>
#include<algorithm>

using namespace std;

int main() {

	int w[10] = {};
	int k[10] = {};
	int  kSum = 0, wSum = 0;

	for (int i = 0; i < 10; i++) {
		cin >> w[i];
	}
	for (int i = 0; i < 10; i++) {
		cin >> k[i];
	}
	sort(w, w + 10);
	sort(k, k + 10);

	for (int i = 7; i < 10; i++) {
		wSum += w[i];
		kSum += k[i];
	}

	cout << wSum << " " << kSum;

	return 0;
}