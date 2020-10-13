// list.h

typedef int element;

// 리스트 노드: (data, ptr to next)
typedef struct ListNode {
  element data;
  struct ListNode* link;
} ListNode;

ListNode* insert_first(ListNode* head, element value );

ListNode* insert(ListNode* head, ListNode* pre, element value);

ListNode* delete ( ListNode* head, ListNode* pre );

void print_list( ListNode* head );

ListNode* search( ListNode* head, element find );

