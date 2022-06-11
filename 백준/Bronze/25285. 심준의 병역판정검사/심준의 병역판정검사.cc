#include <iostream>
#include <string>
using namespace std;

int main() {
    int N;
    cin >> N;
    for (int i = 0; i < N; i++) {
        double c, k;
        cin >> c >> k;
        double BMI = k / ((c / 100) * (c / 100));
        if (c <= 140) {
            cout << 6 << endl;
        }
        else if (c < 146) {
            cout << 5 << endl;
        }
        else if (c < 159) {
            cout << 4 << endl;
        }
        else if (c < 161) {
            if (BMI < 16 || BMI >= 35) {
                cout << 4 << endl;
            }
            else{
                cout << 3 << endl;
            }
        }
        else if (c < 204) {
            if (BMI < 16 || BMI >= 35) {
                cout << 4 << endl;
            }
            else if(BMI >= 16 && BMI < 18.5 || BMI >= 30 && BMI < 35) {
                cout << 3 << endl;
            }
            else if (BMI >= 18.5 && BMI < 20 || BMI >= 25 && BMI < 30) {
                cout << 2 << endl;
            }
            else if (BMI >= 20 && BMI < 25) {
                cout << 1 << endl;
            }
        }
        else {
            cout << 4 << endl;
        }
    }
    return 0;
}