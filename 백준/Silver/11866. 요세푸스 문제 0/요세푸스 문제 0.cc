#include <iostream>
#include <queue>
using namespace std;

int main()
{
	int N, K;
	queue<int> qu;
	cin >> N >> K;
	for (int i = 0; i<N; i++) {
		qu.push(i + 1);
	}
	cout << "<";
	while (!qu.empty()) {
		for (int i = 0; i < K - 1; i++) {
			qu.push(qu.front());
			qu.pop();
		}
		cout << qu.front();
		qu.pop();

		if (!qu.empty()) {
			cout << ", ";
		}

	}
	cout << ">" << '\n';

	return 0;
}