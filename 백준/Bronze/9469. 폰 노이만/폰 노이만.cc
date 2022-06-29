#include <iostream>
using namespace std;

int main(){

    int N;
    cout << fixed;
    cout.precision(6);
    cin >> N;
    for (int i = 1; i <= N; i++){
        int number;
        double D, A, B, F;
        cin >> number >> D >> A >> B >> F;
        cout << number << " " << F * (D / (A + B)) << endl;
    }

    return 0;
}