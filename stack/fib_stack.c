#include <stdio.h>
#include "stack.h"

int fib(int n);

int main() {
  int n;
  
  while( scanf("%d", &n) ) {
    printf("fib(%d) = %d\n", n, fib(n));
  }

  return 0;
}

// Input : n >= 1
// Output: fib(n)

/* 재귀함수 버전
int fib(int n) {
  if (n == 1 || n == 2) return 1;
  else {
    return fib(n-1) + fib(n-2);
  }
}
*/

/* 함수 호출을 별도의 문장으로 분리

else 파트의 return fib(n-1) + fib(n-2)는

    int fib_n_1, fib_n_2;

    fib_n_1 = fib(n-1);

    fib_n_2 = fib(n-2);
    
    return fib_n_1 + fib_n_2;

와 같이 함수 호출을 별도의 문장으로 분리하여 작성할 수 있음

*/

int fib(int n) {

  push( 4 );  // 최종 리턴 주소 L4
  
 L1: // fib 함수 호출하면 L1으로 점프
  
  if (n == 1 || n == 2) {
    // return 1;
    
      int ret = pop();  // 리턴할 주소를 pop
    
      push( 1 );  // 리턴 값을 push
    
      if ( ret == 2 ) goto L2;
      else if ( ret == 3 ) goto L3;
      else if ( ret == 4 ) goto L4;
  }
  else {
    //[첫 번째 재귀호출]: fib_n_1 = fib(n-1);

      int fib_n_1, fib_n_2, ret;

      push( n );  // 현재 n의 값을 stack에 보관
      push( 2 );  // 리턴 주소 L2를 push
    
      n = n - 1;  // fib의 n을 n-1로 업데이트
    
      goto L1;
    
  L2:  // 첫 번째 fib 함수 호출 후 돌아올 자리
    
      fib_n_1 = pop();  // fib(n-1) 리턴 값을 stack에서 pop
      n = pop(); // 원래 n의 값으로 복구

    
    //[두 번째 재귀호출]: fib_n_2 = fib(n-2);
    
      push( n );
      push( fib_n_1 );   // n뿐만 아니라 fib_n_1도 저장!
      push( 3 );  // 리턴 주소 L3를 push

      n = n - 2;  // fib의 n을 n-2로 업데이트
    
      goto L1;
    
  L3:  // 두 번째 fib 함수 호출 후 돌아올 자리

      fib_n_2 = pop();
      fib_n_1 = pop();
      n = pop();

    // return fib_n_1 + fib_n_2;
    
      ret = pop(); // 리턴할 주소를 push
    
      push( fib_n_1 + fib_n_2 ); // 리턴 값을 push
    
      if ( ret == 2 ) goto L2;
      else if ( ret == 3 ) goto L3;
      else if ( ret == 4 ) goto L4;
  }

 L4:
  return pop();  // 스택 top에 fib(n) 값을 최종 리턴!
}


/* 실행 예시

./fib_stack 
1
fib(1) = 1
2
fib(2) = 1
3
fib(3) = 2
4
fib(4) = 3
5
fib(5) = 5
6
fib(6) = 8
7
fib(7) = 13
8
fib(8) = 21
9
fib(9) = 34
10
fib(10) = 55
11
fib(11) = 89
12
fib(12) = 144
13
fib(13) = 233
14
fib(14) = 377
15
fib(15) = 610


 */
