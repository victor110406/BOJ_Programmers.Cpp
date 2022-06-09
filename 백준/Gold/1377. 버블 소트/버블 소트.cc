#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int N, count = 0;
    cin >> N;
    vector <pair<int, int>> A(N);
    for (int i = 0; i < N; i++) {	
        cin >> A[i].first;
        A[i].second = i;
    }
    sort(A.begin(), A.end());
    
    for (int i = 0; i < N; i++) {
        if (count < A[i].second - i)	
            count = A[i].second - i;
    }
    cout << count + 1;
    return 0;
}