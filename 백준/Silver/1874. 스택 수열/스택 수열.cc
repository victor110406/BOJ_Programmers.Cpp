#include<iostream>
#include<string>
#include<vector>
using namespace std;

vector<int> vc;
vector<int> number;
vector<char> check;
int N;

void init_data() {
    static int i = 0;
    if (i == N) {
        cout << "NO" << '\n';
        exit(0);
    }
    vc.push_back(number[i]);
    i++;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin >> N;
    for (int i = 0; i < N; i++) {
        number.push_back(i + 1);
    }
    init_data();
    check.push_back('+');
    for (int i = 0; i < N; i++) {
        int num;
        cin >> num;
        while (vc.empty() || vc.back() != num) {
            init_data();
            check.push_back('+');
        }
        vc.pop_back();
        check.push_back('-');
    }
    for (int i = 0; i < check.size(); i++) {
        cout << check[i] << '\n';
    }
    return 0;
}