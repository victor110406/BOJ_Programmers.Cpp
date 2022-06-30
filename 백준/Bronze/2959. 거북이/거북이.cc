#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int result;
    vector<int>ve;
    for (int i = 0; i < 4; i++) {
        cin >> result;
        ve.push_back(result);
    }
    sort(ve.begin(), ve.end());
    cout << ve[0] * ve[2] << endl;

    return 0;
}