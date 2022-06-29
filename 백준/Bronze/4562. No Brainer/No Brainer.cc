#include <iostream>
using namespace std;

int main(){

    int N;
    int a, b;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> a >> b;
        cout << (a < b ? "NO BRAINS" : "MMM BRAINS") << endl;;
    }
    return 0;
}