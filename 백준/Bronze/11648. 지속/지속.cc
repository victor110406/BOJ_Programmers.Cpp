#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    int N, count = 0;
    vector<int> ve;
    cin >> N;
    if (N < 10) {
        cout << 0 << endl;
        return 0;
    }
    while (1) {
        while (N > 0) {
            ve.push_back(N % 10);
            N /= 10;
        } 
        count++;
        N = 1;
        for (int i = 0; i < ve.size(); i++) {
            N *= ve[i];
            }
        ve.clear();
        if (N / 10 == 0) {
            break;
        }
    }
    cout << count << endl;
    return 0;
}