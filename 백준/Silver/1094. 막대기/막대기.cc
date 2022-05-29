#include<iostream>

using namespace std;

int main()
{
    int stick = 64, X, count = 0;
    cin >> X;
    while (X > 0)
    {
        if (stick > X)
            stick /= 2;
        else
        {
            count++;
            X -= stick;
        }
    }
    cout << count;
}
  