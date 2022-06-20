#include <iostream>
#include <deque>
#include <string>
#include <vector>
using namespace std;

typedef struct student {
    string name;
    double result;
    string rank;
}student;

double Rank(string rank) {
    if (rank == "A+") {
        return 4.5;
    }
    else if (rank == "A0") {
        return 4.0;
    }
    else if (rank == "B+") {
        return 3.5;
    }
    else if (rank == "B0") {
        return 3.0;
    }
    else if (rank == "C+") {
        return 2.5;
    }
    else if (rank == "C0") {
        return 2.0;
    }
    else if (rank == "D+") {
        return 1.5;
    }
    else if (rank == "D0") {
        return 1.0;
    }
    else if (rank == "F") {
        return 0.0;
    }
    return 0;
}

int main() {
    vector<student> ve(20);
    double resultSum = 0, rankSum = 0;
    int subjectCount = 20;
    cout << fixed;
    cout.precision(6);
    for (int i = 0; i < 20; i++) {
        cin >> ve[i].name >> ve[i].result >> ve[i].rank;
        if (ve[i].rank == "P") {
            subjectCount--;
            continue;
        }
        resultSum += ve[i].result;
        rankSum += ve[i].result * Rank(ve[i].rank);
    }
    cout << rankSum / resultSum << '\n';
    
    return 0;
}