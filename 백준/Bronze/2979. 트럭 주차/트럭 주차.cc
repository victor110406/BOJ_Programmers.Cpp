#include<iostream>
using namespace std;

int main() {
    int A, B, C, count = 0;
    int arr[101] = {};
    cin >> A >> B >> C;
    for (int i = 0; i < 3; i++) {
        int s, e;
        cin >> s >> e;
        for (int j = s; j < e; j++) { 
            arr[j]++; 
        }
    }
    for (int i = 1; i <= 100; i++) {
        if (arr[i] == 1) { 
            count += arr[i] * A; 
        }
        else if (arr[i] == 2) { 
            count += arr[i] * B; 
        }
        else { 
            count += arr[i] * C;
        }
    }
    cout << count << '\n';
    return 0;
}