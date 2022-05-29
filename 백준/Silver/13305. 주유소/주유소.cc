#include<iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);

    int N; //도시의 개수
    long long money = 0; // 현재 기름값
    long long minOil = 1000000001; // 가장 저렴한 기름값
    long long total = 0; // 거리

    cin >> N;
    long long* pDistance = (long long*)malloc(sizeof(long long) * (N - 1));
    long long* pGas = (long long*)malloc(sizeof(long long) * N);
    for (int i = 0; i < N - 1; i++) {
        cin >> pDistance[i];
        total += pDistance[i]; // 총 거리의 합
    }
    for (int i = 0; i < N; i++) {
        cin >> pGas[i];
        if (pGas[i] < minOil) {
            minOil = pGas[i]; // 가장 저렴한 기름
        }
    }

    for (int i = 0; i < N - 1; i++) {
        if (pGas[i] == minOil) {
            money += total * minOil;
            break;
        }

        if (pGas[i] < pGas[i + 1]) {
            money += pGas[i] * pDistance[i];
            total -= pDistance[i];
            pGas[i + 1] = pGas[i];
        }
        else {
            money += pGas[i] * pDistance[i];
            total -= pDistance[i];
        }
        
        if (total == 0) {
            break;
        }
    }
    cout << money;

    free(pDistance);
    free(pGas);

    return 0;
}
