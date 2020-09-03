

#include <stdio.h>

// 화씨 0도 - 300도를 20도 간격으로 옮겨가면서
// 섭씨로 변환하는 프로그램

int main() {
  int fahr, celsius;  //화씨, 섭씨
  int lower, upper, step; 

  lower = 0;
  upper = 300;
  step = 20;

  fahr = lower; // 초기 
  while (fahr <= upper)  {  // 반복 조건
    celsius = 5 * (fahr - 32) / 9; 
    printf("%d\t%d\n", fahr, celsius);
    fahr = fahr + step;  // 다음 값
  }
  
  return 0;
}
