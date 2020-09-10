#include <stdio.h>

int sum(int n);

int main() {
  int n = 5;
  
  printf("sum(%d) = %d\n", n, sum(n));
  
  return 0;
}

int sum(int n) {
  // for 루프를 사용하는 방식
  
  /* int a = 0; */
  /* int i; */

  /* for(i=1; i<=n; i++) */
  /*   a = a + i; */
  /* return a; */

  // 재귀 함수 방식
  if (n <= 0) {
    return 0;
  }
  else {  // n>0
    return n + sum(n-1);   // 자기 자신을 호출! 재귀 함수!!
  }
  
}
