#include <stdio.h>

// word_count.c

/*
 chonnam national university
choi\tkwang hoon
 */

// 단어를 구분하는 기준
//  - 공백 ' ', 탭 '\t', 줄 바꿈 '\n'

#define IN  1    // 현재 입력받은 문자가 단어 안에 있는 상태
#define OUT 0    // 현재 입력받은 문자가 단어 밖에 있는 상태

// 단어 밖에 있다가 안으로 들어가는 순간: 새로운 단어가 시작되는 시점
//    state=OUT ===> state=IN     

// 단어 안에 있다가 밖으로 들어가는 순간: 단어가 끝나는 시점
//    state=IN  ===> state=OUT      

int main() {
  int c;  // vs. char c;
  int nw; // number of words
  int state; // 현재 입력받은 문자가 단어 안에 있는 상태인지 단어 밖에 있는 상태인지

  nw = 0;
  state = OUT; 
  
  c = getchar();  // 문자 1개를 키보드로부터 입력받는 라이브러리 함수
  
  while (c != EOF) {
    // 새로운 문자가 들어왔구나!

    if (c == ' ' || c == '\t' || c == '\n')
      state = OUT;

    else {
      // 공백이 아니다!  
      
      // Case1) state=IN
      //   c는 현재 단어에 포함되어야 함.
      //   따라서, nw를 증가시키면 안됨!
      
      // Case2) state=OUT
      //   c로 부터 새로운 단어운 단어가 시작됨
      //   따라서, nw를 증가시킴!


      /*
      if (state == IN) {
	// do nothing
      }
      else { // state == OUT
        state = IN;
	nw = nw + 1;
      }
      */

      if (state == OUT) {
	state = IN;
        nw = nw + 1;
      }
      
    }
    
    
    c = getchar();
  }

  printf("nw: %d\n", nw);
  
  return 0;
}
