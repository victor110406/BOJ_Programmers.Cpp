#include <iostream>
#include <string>
using namespace std;

int main() {
    string A, B;
    int min, max;
    cin >> A >> B;
    for (int i = 0; i < A.size(); i++){
        if (A[i] == '5'){
            A[i] = '6';
        }
    }
    for (int i = 0; i < B.size(); i++){
        if (B[i] == '5'){
            B[i] = '6';
        }
    }
    max = stoi(A) + stoi(B);
    for (int i = 0; i < A.size(); i++){
        if (A[i] == '6'){
            A[i] = '5';
        }
    }
    for (int i = 0; i < B.size(); i++){
        if (B[i] == '6'){
            B[i] = '5';
        }
    }
    min = stoi(A) + stoi(B);
    cout << min << '\n' << max;

    return 0;
}