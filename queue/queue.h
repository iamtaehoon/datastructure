// queue1.h

typedef int element;		// 데이터의 자료형

int is_empty();
int is_full();
void enqueue(element item);
element dequeue();
element peek();
