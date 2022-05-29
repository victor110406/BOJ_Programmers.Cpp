#include <iostream>

using namespace std;

int arr[1000001];

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b;
    cin >> a >> b;

    arr[0] = 1;
    arr[1] = 1;
    
    for (int i = 2; i < b + 1; i++) {
        for (int j = 2 * i; j < b + 1; j += i) {
            if (arr[j] == 0)
                arr[j] = 1;
        }
    }

    for (int i = a; i < b + 1; i++) {
        if (arr[i] == 0) {
            cout << i << '\n';
        }
    }
    return 0;
}