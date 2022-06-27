#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <iterator>
#include <algorithm>
using namespace std;

int main(){

	int N, result = 0, temp;
	int a, b;
	priority_queue<int, vector<int>, greater<int>> q;

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> temp;
		q.push(temp);
	}

	while (q.size() > 1) {
		a = q.top();
		q.pop();
		b = q.top();
		q.pop();
		result += (a + b);
		q.push(a + b);
	}
	cout << result;

	return 0;
}