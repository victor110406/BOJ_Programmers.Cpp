#include <string>
#include <vector>

using namespace std;

int solution(int num) {
    int answer = 0;
    unsigned long long num1 = num;
    while(num1 != 1){
        if(answer == 500){
            return -1;
            break;
        }
        if(num1 % 2 == 0){
            num1 /= 2;
            answer++;
        }
        else if(num1 % 2 == 1){
            num1 *= 3;
            num1 += 1;
            answer++;
        }
    }
    return answer;
}