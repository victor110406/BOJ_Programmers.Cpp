#include <iostream>
#include <string>
#define DI 1000000007
using namespace std;

int arr[4] = {};

int main() {
    int N;
    long long result = 1;
    string str;
    cin >> N >> str;
    for (int i = 0; i < N; i++) {
        if (str[i] == 'A') { arr[0]++; }
        else if (str[i] == 'C') { arr[1]++; }
        else if (str[i] == 'G') { arr[2]++; }
        else if (str[i] == 'T') { arr[3]++; }
    }
    for (int i = 0; i < 4; i++) {
        result *= arr[i];
        result %= DI;
    }
    cout << result;
    
    return 0;
}