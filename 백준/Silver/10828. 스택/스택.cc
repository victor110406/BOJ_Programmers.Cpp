#include<iostream>
#include<string.h>
#define SIZE 10001

using namespace std;

// 데이터를 스택에서 빼는 작업

typedef struct StackType {
	int arr[SIZE]; // int형 데잍터 100개
	int top;
}StackType;

// 초기화 작업
void init(StackType* s) {
	s->top = -1;
}

// 스택이 비어 있는지 판단하는 작업
void empty(StackType* s) {
	if (s->top == -1) {
		cout << '1' << '\n';
	}
	else {
		cout << '0' << '\n';
	}
}

// 데이터를 스택에서 넣는 작업
void push(StackType* s, int value) {
	s->arr[++(s->top)] = value;
}

// 데이터를 스택에서 빼는 작업
void pop(StackType* s) {
	if (s->top == -1) {
		cout << -1 << '\n';
	}
	else {
		cout << s->arr[(s->top)--] << '\n';
	}
}

// 최상위 스택 출력
void top(StackType* s) {
	if (s->top == -1) {
		cout << -1 << '\n';
	}
	else {
		cout << s->arr[(s->top)] << '\n';
	}
}

void size(StackType* s) {
	cout << s->top + 1 << '\n';
}

int main() {

	StackType s;
	init(&s); 
	int N;
	char name[6];
	int data;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> name;
		if (!strcmp(name,"push")) {
			cin >> data;
			push(&s, data);
		}
		else if (!strcmp(name, "pop")) {
			pop(&s);
		}
		else if (!strcmp(name, "size")) {
			size(&s);
		}
		else if (!strcmp(name, "empty")) {
			empty(&s);
		}
		else if (!strcmp(name, "top")) {
			top(&s);
		}
	}

	return 0;
}