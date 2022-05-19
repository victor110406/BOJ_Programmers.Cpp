#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


// sizes_rows는 2차원 배열 sizes의 행 길이, sizes_cols는 2차원 배열 sizes의 열 길이입니다.
int solution(int** sizes, size_t sizes_rows, size_t sizes_cols) {
    int rowMax = 0, colMax = 0;
    int temp;
    for(int i=0; i<sizes_rows; i++){
        if(sizes[i][0] < sizes[i][1]){
            temp = sizes[i][0];
            sizes[i][0] = sizes[i][1];
            sizes[i][1] = temp;
        }
    }
    for(int i=0; i<sizes_rows; i++){
        if(sizes[i][0] > rowMax){
            rowMax = sizes[i][0];
        }
        if(sizes[i][1] > colMax){
            colMax = sizes[i][1];
        }
    }
    
    return rowMax * colMax;
}