#include <stdio.h>
#include "stack1.h"

int main(void)
{
  int input;

  scanf("%d", &input);
  
  while ( input != -1 ) {  // -1 ==> 입력 끝
    push( input );

    scanf("%d", &input);
  }

  printf("\n");
  
  while ( ! is_empty() ) {  // 스택이 비어있지 않으면
    int elem = pop();
    printf("%d ", elem);
  }
  
  printf("\n");
  
  return 0;
}
