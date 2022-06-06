#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int result = 0;
    for (int i = 1; i <= N; i++)
    {
        int num;
        cin>> num;
        if (num != i)
            result++;
    }
    cout << result << "\n";

    return 0;
}