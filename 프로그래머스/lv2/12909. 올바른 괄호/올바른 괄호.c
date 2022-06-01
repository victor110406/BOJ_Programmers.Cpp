#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

typedef struct StackType {
    char stack[100001];
    int top;
}StackType;

void init(StackType* s) {
    s->top = -1;
}

//스택이 비어있는지 확인
int empty(StackType* s) {
    if (s -> top == -1) {
        return 1;
    }
    else {
        return 0;
    }
}

void push(StackType* s, char a) {
    if (a == '(') {
        s->stack[++(s->top)] = a;
    }
    else if (a == ')') {
        if (s->top == -1) {
            s->stack[++(s->top)] = a;
        }
        else if (s->stack[s->top] == '(') {
            s->stack[(s->top)--] = ' ';
        }
        else {
            s->stack[++(s->top)] = ')';
        }
        
    }
}

bool peek(StackType* s) {
    if (empty(s)) {
        return 1;
    }
    return 0;
}


bool solution(const char* s) {
    StackType my_stack;
    init(&my_stack);
    for (int i = 0; i < strlen(s); i++) {
        push(&my_stack, s[i]);
    }
    if (peek(&my_stack)) {
        return true;
    }
    return false;
}