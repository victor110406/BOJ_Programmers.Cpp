#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string nums[10] = { "zero","one","two","three","four","five","six","seven","eight","nine" };

int main()
{
	int N, M;
	vector<pair<string, int>> ve;
	string str;
	cin >> N >> M;
	for (int i = N; i <= M; i++) {
		if (i > 9) {
			str = nums[i / 10] + " " + nums[i % 10];
			ve.push_back({ str, i });
		}
		else {
			str = nums[i % 10];
			ve.push_back({ str, i });
		}
	}
	sort(ve.begin(), ve.end());
	for (int i = 0; i < ve.size(); i++) {
		cout << ve[i].second << " ";
		if (i % 10 == 9) {
			cout << endl;
		}
	}
	return 0;
}