#include <string>
#include <vector>
using namespace std;

int solution(string s) {
    int answer = 0;
    if(s[0]== '-' || s[0] == '+'){
        for(int i=1; i < s.length(); i++){
            answer += (s[i] - 48);
            if(i != s.length() - 1){
                answer *= 10;
            }
        }
        if(s[0]=='-'){
            answer *= -1;
        }
    }
    else{
        for(int i=0; i < s.length(); i++){
            answer += (s[i] - 48);
            if(i != s.length() - 1){
                answer *= 10;
            }
        }
    }
    return answer;
}