#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    sort(lost.begin(), lost.end());
    sort(reserve.begin(), reserve.end());
    for (int i = 0; i < lost.size(); i++) {
        for (int j = 0; j < reserve.size(); j++) {
            if (lost[i] == reserve[j]) {
                lost.erase(lost.begin() + i);
                reserve.erase(reserve.begin() + j);
                i = -1;
                break;
            }
        }
    }
    int answer = n - lost.size();

    while (1) {
        if (lost.empty() || reserve.empty()) {
            break;
        }
        if (lost.back() > reserve.back()) {
            if (lost.back() - 1 == reserve.back()) {
                lost.pop_back();
                reserve.pop_back();
                answer++;
            }
            else {
                lost.pop_back();
            }
        }
        else if (lost.back() < reserve.back()) {
            if (lost.back() == reserve.back() - 1) {
                lost.pop_back();
                reserve.pop_back();
                answer++;
            }
            else {
                reserve.pop_back();
            }
        }
        else {
            lost.pop_back();
            reserve.pop_back();
            answer++;
        }
    }
    return answer;
}