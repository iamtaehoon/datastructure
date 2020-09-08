#include <stdio.h>

// (1) 함수 선언 (prototype, 원형)
int power(int m, int n);


int main() {

  // 할 일
  printf("power(%d,%d) = %d\n", 2, 3, power(2,3));   // (3) 함수 호출
  printf("power(%d,%d) = %d\n", 3, 5, power(3,5));
  
  return 0;
}



// (2) 함수 정의
int power(int m, int n) {
  // p = m^n ===> return p; !!!
  
  // ex) m=2 n=3
  //     p = 1 * 2 * 2 * 2 = 2^3 ===> m^n !!!

  int p;
  int i;

  p = 1;
  for (i = 1; i <= n; i++)
    p = p * m;

  return p;
  
}
