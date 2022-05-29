#include<iostream>

using namespace std;

int length(char* a) {
    int i = 0;
    while (a[i] != 0) {
        i++;
    }
    return i;
}

int main() {
    int N;
    char a[101][101] = {};
    cin >> N;
    int sum = N;
    for (int i = 0; i < N; i++) {
        char check[27] = {};
        cin >> a[i];
        int count = length(a[i]);
        for (int j = 0; j < count; j++) {
            if (check[a[i][j] - 96] == 0) {
                if (a[i][j] != a[i][j + 1]) {
                    check[a[i][j] - 96]++;
                }
            }
            else {
                sum--;
                break;
            }
        }
        
    }
    cout << sum;
    
    return 0;
}