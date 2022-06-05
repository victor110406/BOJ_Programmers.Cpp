#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    long long answer = 0, temp = 1;
    int result = 0;
    int i = 0, size = 1; 
    while (n >= size) {
        i++;
        size *= 3;
    }
    size /= 3;
    for (int j = 0; j < i; j++) {
        if (j != 0) {
            temp *= 10;
        }
        answer *= 10;
        answer += (n / size);
        n = (n % size);
        size /= 3;
    }

    size++;

    while (answer > 0) {
        result += (answer / temp) * size;
        answer %= temp;
        temp /= 10;
        size *= 3;
    }
    
    return result;
}