#include <iostream>
#include <string>
#include <vector>
using namespace std;

int solution(vector<vector<int>> board, vector<int> moves) {
    int answer = 0;
    vector<int> ve;

    for (int i = 0; i < moves.size(); i++){
        int k = moves[i] - 1;      
        for (int j = 0; j < board[0].size(); j++){
            if (board[j][k] != 0){
                ve.push_back(board[j][k]);
                board[j][k] = 0;
                break;
            }
        }
    }

    for (int i = 0; i < (int)ve.size() - 1; i++){
        if (ve[i] == ve[i + 1]){
            ve.erase(ve.begin() + i);       
            ve.erase(ve.begin() + i);
            i = -1;          
            answer += 2;
        }
    }
    return answer;
}