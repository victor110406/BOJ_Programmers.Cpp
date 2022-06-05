#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers) {
    int index[10]={};
    int answer = 0;
    for(int i=0; i<numbers.size(); i++){
        index[numbers[i]]++;
    }
    for(int i=0; i<10; i++){
        if(index[i] == 0){
            answer += i;
        }
    }
    return answer;
}