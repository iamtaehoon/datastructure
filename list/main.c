#include <stdio.h>
#include "list.h"

int main() {
  ListNode* head;
  ListNode* p;
  ListNode* q;
  ListNode* r;

  head = NULL;

  print_list ( head );  // NULL

  head = insert_first ( head, 123 );

  print_list ( head );  // 123 NULL
  
  head = insert_first ( head, 456 );
  p = head;

  print_list ( head );  // 456 123 NULL

  head = insert (head, p, 789);
  
  print_list ( head );  // 456 789 123 NULL

  q = p->link;
  head = delete ( head, q );

  print_list ( head ); // 456 789 NULL

  r = search (head , 789);

  if (r != NULL)
    printf("Found!!\n");
  else
    printf("Error!!\n");

  r = search (head , 123);

  if (r == NULL)
    printf("Normal!!\n");
  else
    printf("Error!!\n");
  
}
