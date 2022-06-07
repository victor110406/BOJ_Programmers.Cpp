#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    vector<int> one = {1,2,3,4,5};
    vector<int> two = {2,1,2,3,2,4,2,5};
    vector<int> three = {3,3,1,1,2,2,4,4,5,5};
    int oneC = 0, twoC = 0, threeC = 0, max = 0;
    int j = 0, k = 0, h = 0;
    for (int i = 0; i < answers.size(); i++) {
        if (answers[i] == one[j++]) {
            oneC++;
            if (oneC > max) {
                max = oneC;
            }
        }
        if (answers[i] == two[k++]) {
            twoC++;
            if (twoC > max) {
                max = twoC;
            }
        }
        if (answers[i] == three[h++]) {
            threeC++;
            if (threeC > max) {
                max = threeC;
            }
        }
        if (j == 5) {
            j = 0;
        }
        if (k == 8) {
            k = 0;
        }
        if (h == 10) {
            h = 0;
        }

    }
    if (oneC == max) {
        answer.push_back(1);
    }
    if (twoC == max) {
        answer.push_back(2);
    }
    if (threeC == max) {
        answer.push_back(3);
    }
    return answer;
}