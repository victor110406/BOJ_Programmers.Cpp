#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    int temp;
    string answer = s;
    for(int i=0; i<s.length(); i++){
        for(int j=i+1; j<s.length(); j++){
            if(answer[i] < answer[j]){
                temp = answer[i];
                answer[i] = answer[j];
                answer[j] = temp;
            }
        }
    }
    return answer;
}