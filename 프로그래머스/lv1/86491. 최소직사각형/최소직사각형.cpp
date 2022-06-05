#include <stdio.h>
#include <stdbool.h>
#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int rowMax = 0, colMax = 0;
    int temp;
    for (int i = 0; i < sizes.size(); i++) {
        if (sizes[i][0] < sizes[i][1]) {
            temp = sizes[i][0];
            sizes[i][0] = sizes[i][1];
            sizes[i][1] = temp;
        }
    }
    for (int i = 0; i < sizes.size(); i++) {
        if (sizes[i][0] > rowMax) {
            rowMax = sizes[i][0];
        }
        if (sizes[i][1] > colMax) {
            colMax = sizes[i][1];
        }
    }

    return rowMax * colMax;
}