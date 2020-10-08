#include <stdio.h>
#include <stdlib.h>

#include "queue.h"

#define MAX_SIZE 100	// 배열의 크기
element  queue_arr[MAX_SIZE]; // 1차원 배열

int  front = 0;			
int  rear = 0;			

int is_empty() {
  return front==rear;  // e.g., front==rear==5
}

int is_full() {
  return ((rear+1) % MAX_SIZE) == front;
}

void enqueue(element item) {
  if (is_full()) {
    fprintf(stderr, "error: enqueue\n");
    return;
  }
  else {
    rear = (rear + 1) % MAX_SIZE;
    queue_arr[rear] = item;
  }
}

element dequeue() {
  if (is_empty()) {
    fprintf(stderr, "error: dequeue\n");
    return -1;  // -1 dummy!!
  }
  else {
    front = (front + 1) % MAX_SIZE;
    
    return queue_arr[front];
  }
}

element peek() {  // dequeue의 변형
  if (is_empty()) {
    fprintf(stderr, "error: peek\n");
    return -1;  // -1 dummy
  }
  else {
    return queue_arr[ (front + 1) % MAX_SIZE ];
  }
}
