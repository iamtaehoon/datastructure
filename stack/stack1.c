#include <stdio.h>
#include <stdlib.h>

#include "stack1.h"

// 스택을 전역 변수로 구현한다.

#define MAX_STACK_SIZE 100	// 스택의 최대 크기
element  stack[MAX_STACK_SIZE]; // 1차원 배열
int  top = -1;			

// 공백 상태 검출 함수
int is_empty()
{
	return (top == -1);
}
// 포화 상태 검출 함수
int is_full()
{
	return (top == (MAX_STACK_SIZE - 1));
}
// 삽입 함수
void push(element item)
{
	if (is_full()) {
		fprintf(stderr, "error: push onto the full stack\n");
		return;
	}
	else stack[++top] = item;
}
// 삭제 함수
element pop()
{
	if (is_empty()) {
		fprintf(stderr, "error: pop from the empty stack\n");
		exit(1);
	}
	else return stack[top--];
}
// 피크 함수
element peek()
{
	if (is_empty()) {
		fprintf(stderr, "error: peek from the empty stack\n");
		exit(1);
	}
	else return stack[top]; 
}

