#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> prices) {
    vector<int> answer;
    int result = 0;

    for(int i = 0; i < prices.size(); i++) {
         for(int j = i; j < prices.size(); j++) {
             result = j;
             if(prices[i] > prices[j])  {
                 break;
             }
         }
        answer.push_back(result - i);
    }
    return answer;
}