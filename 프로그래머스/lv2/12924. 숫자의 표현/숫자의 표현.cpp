#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 1;
    int num = n / 2 + 1;
    for (int i = 1; i < num; i++) {
        int sum = 0;
        for (int j = i; j <= num; j++) {
            sum += j;
            if (sum == n) {
                answer++;
                break;
            }
            else if (sum > n) {
                break;
            }
        }
    }
    return answer;
}