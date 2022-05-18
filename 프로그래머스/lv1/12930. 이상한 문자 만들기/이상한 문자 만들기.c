#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char* solution(const char* s)
{
    int length = strlen(s);
    char* answer = (char*)malloc(sizeof(char) * length + 1);
    strcpy(answer, s);

    for (int i = 0, cnt = 0; i < length; i++, cnt++)
    {
        if (cnt % 2 == 0 && islower(answer[i]))
        {
            answer[i] -= 32;
        }
        else if (cnt % 2 == 1 && isupper(answer[i]))
        {
            answer[i] += 32;
        }
        else if (answer[i] == ' ') 
        {
            cnt = -1;
        }
    }
    
    return answer;
}