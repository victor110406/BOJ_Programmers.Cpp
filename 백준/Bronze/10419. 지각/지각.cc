#include <iostream>

using namespace std;

int main() {
    int T, s, t, d;
    cin >> T;
    while (T--)
    {
        s = 0, t = 0;
        int ans = 0;
        cin >> d;
        while (1)
        {
            if (d < s + t) { 
                t--; 
                break; 
            }
            t++;
            s = t * t;
        }
        cout << t << '\n';
    }
    return 0;
}