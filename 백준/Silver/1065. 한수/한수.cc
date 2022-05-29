#include<iostream>

using namespace std;

int main()
{
    int N, A, B, C, count = 99;
    cin >> N;
    if (N < 100) {
        cout << N;
    }
    else{
        for (int i = 100; i <= N; i++)
        {
            A = i / 100;
            B = i / 10 % 10;
            C = i % 10;

            if ((C - B) == (B - A))
                count++;
        }
        cout << count;
    }
}
