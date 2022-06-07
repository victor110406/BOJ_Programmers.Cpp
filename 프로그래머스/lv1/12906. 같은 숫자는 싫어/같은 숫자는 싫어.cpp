#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr)
{
    vector<int> answer;
    int result = 10;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] != result) {
            answer.push_back(arr[i]);
            result = arr[i];
        }
    }
    return answer;
}