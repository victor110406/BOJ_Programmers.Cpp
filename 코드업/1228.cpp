#include<iostream>
using namespace std;

int main()
{
    double cm, kg, result;
    cin >> cm >> kg;
    result = (cm - 100) * 0.9;
    result = (kg - result) * 100 / result;
    if (result <= 10) {
        cout << "정상";
    }
    else if (result > 10 && result <= 20) {
        cout << "과체중";
    }
    else {
        cout << "비만";
    }

    return 0;
}