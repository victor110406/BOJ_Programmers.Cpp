#include<iostream>
#include<deque>
#include<string>
using namespace std;

int main() {
	int N, K;
	deque<int> dq;
	cin >> N >> K;
	for (int i = 1; i <= N; i++) {
		dq.push_back(i);
	}
	cout << "<";
	while (dq.size() - 1) {
		for (int i = 1; i < K; i++) {
			int temp = dq.front();
			dq.pop_front();
			dq.push_back(temp); 
		}
		cout << dq.front() << ", ";
		dq.pop_front();
	}
	cout << dq.front() << ">";
	return 0;
}