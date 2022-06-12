#include <string>
#include <vector>
#include <math.h>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer, ve;
    for (int i = 0; i < progresses.size(); i++) {
        int result = (100 - progresses[i]) / speeds[i];
        if((100 - progresses[i]) % speeds[i] != 0){
            result++;
            answer.push_back(result);
        }
        else{
            answer.push_back(result);
        }
    }
    int result = answer.front();
    int count = 0;
    for (int i = 0; i < answer.size(); i++) {
        if (answer[i] <= result) {
            count++;
        }
        else {
            result = answer[i--];
            ve.push_back(count);
            count = 0;
        }
    }
    ve.push_back(count);
    return ve;
}