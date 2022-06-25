#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    int N, M, result = 0;
    vector<int> ve;
    cin >> N >> M;
    for (int i = 0; i < N; i++) {
        cin >> result;
        ve.push_back(result);
    }
    sort(ve.begin(), ve.end());
    cout << ve[N - M];

    return 0;
}