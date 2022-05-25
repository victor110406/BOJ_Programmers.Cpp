#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

void quickSort(int* data, int start, int end) {
	if(start >= end){ 
		return;
	}
	int key = start;
	int i = start + 1;
	int j = end;
	int temp;

	while (i <= j) { 
		while (data[i] <= data[key]) { 
			i++;
		}
		while (data[j] >= data[key] && j > start) {
			j--;
		}
		if (i > j) {
			temp = data[j];
			data[j] = data[key];
			data[key] = temp;
		}
		else {
			temp = data[j];
			data[j] = data[i];
			data[i] = temp;
		}
	}

	quickSort(data, start, j - 1);
	quickSort(data, j + 1, end);
}

int solution(int A[], size_t A_len, int B[], size_t B_len) {
    int answer = 0;
    quickSort(A,0,A_len-1);
    quickSort(B,0,B_len-1);
    for(int i=0; i<A_len; i++){
        answer += A[i] * B[A_len - i - 1];
    }
    return answer;
}