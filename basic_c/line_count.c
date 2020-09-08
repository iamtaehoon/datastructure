#include <stdio.h>

// line_count.c

int main() {
  int c;  // vs. char c;
  int nl; // number of lines

  nl = 0;
  
  c = getchar();  // 문자 1개를 키보드로부터 입력받는 라이브러리 함수
  
  while (c != EOF) {
    // 새로운 문자가 들어왔구나!

    // c == '\n' 이면 새로운 줄이 시작되었구나!
    if (c == '\n') {
      nl = nl + 1;
    }
    
    c = getchar();
  }

  printf("nl: %d\n", nl);
  
  return 0;
}
