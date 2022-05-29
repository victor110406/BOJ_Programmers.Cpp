#include<iostream>
#include<algorithm>

using namespace std;
int a[1000000];

bool compare(int a, int b)
{
    return a > b;
}

int main() {
    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);
    int N;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }
    sort(a, a + N, compare);
    for (int i = 0; i < N; i++) {
        cout << a[i] << '\n';
    }
}