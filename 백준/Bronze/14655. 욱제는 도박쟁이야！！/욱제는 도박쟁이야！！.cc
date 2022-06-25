#include <iostream>
#include <algorithm>
using namespace std;

int main(){

	int N, coin;
	cin >> N;
	long long sum = 0;

	for (int i = 0; i < N; i++){
		cin >> coin;
		sum += abs(coin);
	}

	for (int i = 0; i < N; i++){
		cin >> coin;
		sum += abs(coin);
	}

	cout << sum << "\n";
	return 0;
}