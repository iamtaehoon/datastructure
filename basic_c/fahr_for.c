
// fahr_for.c 

#include <stdio.h>

// 화씨 0도 - 300도를 20도 간격으로 옮겨가면서
// 섭씨로 변환하는 프로그램

#define LOWER 0               // 권장 스타일: 상수 이름은 모두 대문자로 작성하세요!
#define UPPER 300
#define STEP  20

int main() {
  int fahr, celsius;  //화씨, 섭씨
  /* int lower, upper, step;  */

  /* lower = LOWER; */
  /* upper = UPPER; */
  /* step  = STEP; */

  /* fahr = lower; // 초기 */
  /* while (fahr <= upper)  {  // 반복 조건 */
  /*   celsius = 5 * (fahr - 32) / 9; */
  /*   printf("%d\t%d\n", fahr, celsius); */
  /*   fahr = fahr + step;  // 다음 값 */
  /* } */

/////////////////////////////////////
// while 루프를 for루프로 바꾸어 작성하기!
/////////////////////////////////////
  
  for ( fahr = LOWER ;  fahr <= UPPER ;  fahr = fahr + STEP ) {
    celsius = 5 * (fahr - 32) / 9;
    printf("%d\t%d\n", fahr, celsius);
  }
  
  
  return 0;
}
