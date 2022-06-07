#include <iostream>
#include <string>
#include <vector>

using namespace std;

int so[1000001];

bool sosu(int a) {
	for (int i = 2; i * i <= a; i++) {
		if (a % i == 0) {
			return 0;
		}
	}
	return 1;
}

int solution(int n) {
	for (int i = 2; i <= n; i++) {
		so[i] = so[i - 1] + sosu(i);
	}
	return so[n];
}
