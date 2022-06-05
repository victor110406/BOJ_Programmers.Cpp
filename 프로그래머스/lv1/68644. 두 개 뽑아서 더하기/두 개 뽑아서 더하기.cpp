#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> numbers) {
    vector<int> answer;
    int index[201] = {};
    int count = 0;
    for (int i = 0; i < numbers.size(); i++) {
        for (int j = i + 1; j < numbers.size(); j++) {
            index[numbers[i] + numbers[j]]++;
        }
    }
    for (int i = 0; i < 201; i++) {
        if (index[i] > 0) {
            answer.push_back(i);   
        }
    }
    return answer;
}