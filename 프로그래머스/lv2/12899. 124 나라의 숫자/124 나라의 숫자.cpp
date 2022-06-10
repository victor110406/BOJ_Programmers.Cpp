#include <string>
#include <vector>
using namespace std;

string solution(int n) {
    string answer = "";
    int result = 0;

    while (n != 0) {
        result = n % 3;
        n /= 3;

        if (result == 0) { 
            answer = "4" + answer;
            n--;
        }
        else if (result == 1) {
            answer = "1" + answer;
        }
        else if (result == 2) {
            answer = "2" + answer;
        }
    }

    return answer;
}