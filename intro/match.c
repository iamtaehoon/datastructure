#include <stdio.h>
#include "stack1.h"

int main(void)
{
  char input;

  scanf("%c", &input);
  
  while ( input != '$' ) {  // '$' ==> 입력 끝

    // 열린 괄호인 경우
    if (input == '[' || input == '{' || input == '(') {
      push( (int)input );
    }
    // 닫힌 괄호인 경우
    else if (input == ']' || input == '}' || input == ')') {
      if ( is_empty() ) { // 비어있으면
	printf("No!!\n");
	return -1;
      }
      else { // 비어있지 않으면
	if ( ( input == ']' && (char) peek() == '[' )
	   || ( input == '}' && (char) peek() == '{' )
	   || ( input == ')' && (char) peek() == '(' )  ) {
	  pop();
	}
	else {  // 조금 더 생각해볼 여지가 있습니다.
	    printf("No!!\n");
	    return -1;
	}
      }
    }
    // 이도 저도 아닌 경우
    else {
      // 에러 처리해야 함
    }

    scanf("%c", &input);
  }

  printf("OK \n");

  return 0;
}
