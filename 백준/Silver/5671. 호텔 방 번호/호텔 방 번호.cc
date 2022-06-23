#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N, M;
    while (cin >> N >> M) {
        int count = 0;
        for (int i = N; i <= M; i++) {
            int arr[10] = {};
            int result = i, check = 0;
            while (result > 0) {
                arr[result % 10]++;
                result /= 10;
            }
            for (int j = 0; j < 10; j++) {
                if (arr[j] > 1) {
                    break;
                }
                else {
                    check++;
                }
            }
            if (check == 10) {
                count++;
            }
            
        }
        cout << count << '\n';
    }
    return 0;
}