#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int solution(vector<int> citations) {
    int answer = *max_element(citations.begin(),citations.end()) - 1;
    if (answer == -1) {
        return 0;
    }
    sort(citations.begin(), citations.end());
    while (answer--) {
        int up = 0, down = 0;
        for (int i = 0; i < citations.size(); i++) {
            if (citations[i] > answer) {
                up++;
            }
            else if (citations[i] < answer) {
                down++;
            }
            else {
                up++, down++;
            }
        }
        if (answer <= up && answer >= down) {
            return answer;
        }
    }
    return answer;
}