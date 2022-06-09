#include <string>
#include <vector>
using namespace std;

vector<vector<int>> answer;

void hanoi(int n, int start, int work, int target) {
	if (n == 1) {
		answer.push_back({ start, target });
	}
	else {
		hanoi(n - 1, start, target, work);
		answer.push_back({ start, target });
		hanoi(n - 1, work, start, target);
	}
}

vector<vector<int>> solution(int n) {
	hanoi(n, 1, 2, 3);
	return answer;
}
