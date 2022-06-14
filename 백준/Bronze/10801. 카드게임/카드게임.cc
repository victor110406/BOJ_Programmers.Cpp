#include <iostream>
#include <string>
using namespace std;

int main() {
    int aTeam[10], bTeam[10];
    int aCount = 0, bCount = 0;
    for (int i = 0; i < 10; i++) {
        cin >> aTeam[i];
    }
    for (int i = 0; i < 10; i++) {
        cin >> bTeam[i];
    }
    for (int i = 0; i < 10; i++) {
        if (aTeam[i] > bTeam[i]) {
            aCount++;
        }
        else if (aTeam[i] < bTeam[i]) {
            bCount++;
        }
    }
    if (aCount > bCount) {
        cout << 'A';
    }
    else if (aCount < bCount) {
        cout << 'B';
    }
    else {
        cout << 'D';
    }
    return 0;
}