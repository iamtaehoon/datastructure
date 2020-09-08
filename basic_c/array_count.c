#include <stdio.h>

int main() {
  int c;
  int nwhite; // 공백이 몇 개?
  int ndigit[10]; // 각각의 숫자가 몇 개?
                  // ndigit[0] 0이 몇 번 입력되었나?
                  // ndigit[1] 1이 몇 번 입력되었나?
                  //   ...
                  // ndigit[9] 9가 몇 번 입력되었나?

  int i;

  
  nwhite = 0;
  
  /*
  ndigit[0]= 0;
  ndigit[1]= 0;
  ...
  ndigit[9]= 0;
  */
  for (i = 0; i<=9; i++)
    ndigit[i] = 0;
  
  c = getchar();

  while( c != EOF ) {
    if (c == ' ' || c == '\n' || c == '\t')
      nwhite = nwhite + 1;

    if ('0' <= c && c <= '9')
      ndigit[c - '0'] = ndigit[c - '0'] + 1; // (c - '0') :  0, 1, ..., 9  !!!
                                             // 왜? 아스키코드 테이블 참고!
    
    c = getchar();
  }

  printf("nwhite %d\n", nwhite);
  
  // printf("...", ndigit); 없음!!! 
  for (i=0; i<=9; i++)
    printf("ndigit[%d] = %d\n", i, ndigit[i]);
  
  return 0;
}
