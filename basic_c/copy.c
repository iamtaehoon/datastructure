// copy.c

// 한 문자씩 입력받아 그대로 출력하기

#include <stdio.h>

int main () {

  int c;

  // 한 문자씩 입력받아 할 일을 하기
  c = getchar();  // 문자 1개를 키보드로부터 입력받는 라이브러리 함수
  while (c != EOF) {  // EOF: 입력 끝났어요! 윈도우 Ctrl+z, 리눅스 Ctrl+d
    // 할 일 작성 하기
    putchar(c);
    
    c = getchar();
  }
  
  return 0;
}
