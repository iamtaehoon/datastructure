#include <stdio.h>
#include <stdlib.h> // malloc 라이브러리 함수
#include "list.h"


void print_list (ListNode* head) {
  ListNode* p;
  
  p = head;

  /* 1차 버전 */
  /* while( 1 ) { */
  /*   if ( p == NULL ) // p가 가리키는 리스트가 비어있으면 */
  /*     break; */
  /*   else { */
  /*     printf("%d ", p->data); */
  /*     p = p->link;   // !!!! */
  /*   } */
  /* } */

  // 2차 버전  
  while( p != NULL ) {
    printf("%d ", p->data);
    p = p->link;   // !!!!
  }

  printf("NULL\n");

  // cf. 교재의 for루프를 사용한 버전도 비교해보세요
}

ListNode* insert_first(ListNode* head, element value ) {
  ListNode* p;
  p = (ListNode*) malloc( sizeof(ListNode) ); // p <- (???,???)
  p->data = value;
  p->link = head;
  head = p;
  return head;
}

ListNode* insert(ListNode* head, ListNode* pre, element value) {
  ListNode* p;
  p = (ListNode*) malloc( sizeof(ListNode) ); // p <- (???,???)
  p->data = value;
  p->link = pre->link;
  pre->link = p;
  return head;
}

ListNode* delete ( ListNode* head, ListNode* pre ) {
  ListNode* p;

  p = pre->link;
  pre->link = pre->link->link;
  free(p);
  return head; 
}

ListNode* search ( ListNode* head, element find ) {
  ListNode* p;

  p = head;

  while ( p != NULL ) {
    if( p->data == find )
      break;
    else
      p = p->link;
  }
  
  return p;
}
