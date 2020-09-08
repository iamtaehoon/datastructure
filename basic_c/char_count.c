#include <stdio.h>

// char_count.c

int main() {
  int c;  // vs. char c;
  int nc; // number of chars.

  nc = 0;
  
  c = getchar();  // 문자 1개를 키보드로부터 입력받는 라이브러리 함수
  
  while (c != EOF) {
   // 새로운 문자가 들어왔구나!
    nc = nc + 1;
    
    c = getchar();
  }

  printf("nc: %d\n", nc);
  
  return 0;
}
