#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    int count = 0;
    int zeroCount = 0;
    vector<int> answer;
    for (int i = 0; i < lottos.size(); i++) {
        if (lottos[i] == 0) {
            zeroCount++;
            continue;
        }
        for (int j = 0; j < win_nums.size(); j++) {
            if (lottos[i] == win_nums[j]) {
                count++;
            }
        }
    }
   
    if ((count + zeroCount) > 1) {
        answer.push_back(7 - (count + zeroCount));
    }
    else {
        answer.push_back(6);
    }
    if (count > 1) {
        answer.push_back(7 - count);
    }
    else {
        answer.push_back(6);
    }
    return answer;
}