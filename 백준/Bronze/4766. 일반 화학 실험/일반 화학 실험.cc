#include <iostream>
using namespace std;

int main()
{
    double N ,M;
    cin >> N;
    while (cin >> M){
        if (M == 999)
        {
            break;
        }
        printf("%.2lf\n", M - N);
        N = M;
    }
    return 0;
}