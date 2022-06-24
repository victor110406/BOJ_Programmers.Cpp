#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N, result;
    int count = 0;
    vector<int>ve;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> result;
        ve.push_back(result);
    }
    for (int j = ve.size() - 1; j > 0; --j) {
        while (ve[j] <= ve[j - 1]) {
            ve[j - 1]--;
            count++;
        }
    }
    cout << count << '\n';
    return 0;
}