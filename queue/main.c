#include <stdio.h>
#include "queue.h"

int main(void) {
  int item;

  enqueue(1);
  enqueue(2);
  enqueue(3);

  item = dequeue();
  printf("%d ", item);  // 1 !!
  
  item = dequeue();
  printf("%d ", item);  // 2 !!

  enqueue(4);
  enqueue(5);

  item = dequeue();
  printf("%d ", item);  // 3 !!


  printf("is_empty() : %d\n", is_empty());  // 0 비어있지 않음!!
  
  return 0;
}
