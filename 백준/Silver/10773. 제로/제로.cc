#include<iostream>

using namespace std;

int main() {

    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);
    int N, j = 0, num, sum = 0;
    cin >> N;
    int* stack = (int*)malloc(sizeof(int) * N);
    for (int i = 0; i < N; i++) {
        cin >> num;
        if (num == 0) {
            stack[j] = 0;
            j--;
        }
        else {
            stack[j] = num;
            j++;
        }
    }
    for (int i = 0; i < j; i++) {
        sum += stack[i];
    }
    cout << sum;
}