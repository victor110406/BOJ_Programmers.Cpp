#include<iostream>

using namespace std;

int main() {
    
    int sum = 0;
    int arr[9] = {};
    bool check = false;
    for (int i = 0; i < 9; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
    for (int i = 0; i < 9; i++) {
        if (check) {
            break;
        }
        for (int j = i + 1; j < 9; j++) {
            if (sum - (arr[i] + arr[j]) == 100) {
                arr[i] = 0;
                arr[j] = 0;
                check = true;
                break;
            }
        }
    }
    for (int i = 0; i < 9; i++) {
        if (arr[i] == 0) {
            continue;
        }
        cout << arr[i] << '\n';
    }

    return 0;
}