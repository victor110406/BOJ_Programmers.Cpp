#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N, M, result;
    int count = 0;
    vector<int>ve;
    cin >> N >> M;
    for (int i = 0; i < N; i++) {
        cin >> result;
        ve.push_back(result);
    }
    sort(ve.begin(), ve.end());
    for (int i = 0; i < N - 1; i++) {
        for (int j = i + 1; j < N; j++) {
            if (ve[i] + ve[j] == M) {
                count++;
            }
        }
    }
    cout << count << '\n';

    return 0;
}