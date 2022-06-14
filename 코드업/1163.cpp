#include<iostream>
using namespace std;

int main(void)
{
    int year, month, day;
    cin >> year >> month >> day;
    if ((year + month + day) % 1000 / 100 % 2 == 0) {
        cout << "대박";
    }
    else {
        cout << "그럭저럭";
    }

    return 0;
}