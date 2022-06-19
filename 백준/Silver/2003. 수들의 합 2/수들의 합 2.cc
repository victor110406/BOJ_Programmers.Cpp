#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);;
    cin.tie(NULL), cout.tie(NULL);

    int N, M, result, count = 0;
    int check = 0;
    vector<int> ve;
    cin >> N >> M;
    for (int i = 0; i < N; i++) {
        cin >> result;
        ve.push_back(result);
    }
    for (size_t i = 0; i < ve.size(); i++) {
        for (size_t j = i; j < ve.size(); j++) {
            check += ve[j];
            if (check > M) {
                break;
            }
            else if (check == M) {
                count++;
                break;
            }
        }
        check = 0;
    }
    cout << count << '\n';
    return 0;
}