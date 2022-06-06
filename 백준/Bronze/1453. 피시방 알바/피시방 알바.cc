#include<iostream>
#include<string>
using namespace std;

int main() {
	int N, a,count = 0;
	char stay[101] = {};
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> a;
		if (stay[a] == 0) {
			stay[a]++;
		}
		else {
			count++;
		}
	}
	cout << count;
	return 0;
}