
#include <stdio.h>

struct StudInfo {
  char name[10];
  int id;
};

void f(int x);   // 함수 선언
void g(int y[]);   // 함수 선언
void h(struct StudInfo t);   // 함수 선언

int main() {
  int i;
  int arr[10];
  struct StudInfo s;

  i = 123;
  arr[0] = 123;
  s.id = 1234567;

  f(i);       //함수 호출
  g(arr);
  h(s);
  
  printf("%d\n", i);  // 답: 123
  printf("%d\n", arr[0]);  // 답: 456
  printf("%d\n", s.id);  // 답: ????
  
  return 0;
}

void f(int x) {  //함수 정의  // x<- 123
  x = 456;
}

void g(int y[]) {  //함수 정의  
  y[0] = 456;
}

void h(struct StudInfo t) {
  t.id = 7654321;
}
