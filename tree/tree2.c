#include <stdio.h>
#include <stdlib.h>  // malloc

#define DATATYPE char

#include "tree.h"

// 전위 순회(preorder traversal)

//  - 알고리즘 preorder(bt)
//     입력: 이진 트리(bt)
//     출력: 전위 순회 순서대로 노드의 라벨을 출력 
//     절차:
//       1. if ( bt가 비어있으면) return
//       2. else
//         2-1. print (bt.data)     // 현재 노드 출력
//         2-2. preorder(bt.left)   // 왼쪽 서브트리를 전위 순회
//         2-3. preorder(bt.right)  // 오른쪽 서브트리를 전위 순회

void preorder(TreeNode* bt) {
  if (bt == NULL) // 이진트리bt가 비어있으면
    return;
  else { // 아니면
    printf("%c ", bt->data); // 현재 노드 출력
    preorder( bt->left );    // 왼쪽 서브트리를 전위 순회
    preorder( bt->right );   // 오른쪽 서브트리를 전위 순회
  }
}

// 중위 순회(inorder traversal)

//  - 알고리즘 inorder(bt)
//     입력: 이진 트리(bt)
//     출력: 중위 순회 순서대로 노드의 라벨을 출력 
//     절차:
//            ????
void inorder(TreeNode* bt) {
  // ???
}

// 후위 순회(postorder traversal)

//  - 알고리즘 postorder(bt)
//     입력: 이진 트리(bt)
//     출력: 후위 순회 순서대로 노드의 라벨을 출력 
//     절차:
//            ????          
void postorder(TreeNode* bt) {
  // ???
}


int main() {
  TreeNode a, b, c, d, e, f;
  TreeNode* root;
  TreeNode* p;

  root = & a;

  // 그림 8-19 예제 (1) - malloc을 사용하지 않는 버전
  a.data  = 'A';
  a.left  = & b;
  a.right = & c;

  b.data  = 'B';
  b.left  = & d;
  b.right = & e;

  c.data  = 'C';
  c.left  = & f;
  c.right = NULL;

  d.data  = 'D';
  d.left  = NULL;
  d.right = NULL;

  e.data  = 'E';
  e.left  = NULL;
  e.right = NULL;

  f.data  = 'F';
  f.left  = NULL;
  f.right = NULL;

  // preorder traversal : A B D E C F 
  preorder( root );

  // inorder traversal : D, B, E, A, F, C
  inorder( root );

  // postorder traversal : D, E, B, F, C, A
  postorder( root );
  
  printf("\n");
  
  return 0;
}

// https://github.com/kwanghoon/datastructure


