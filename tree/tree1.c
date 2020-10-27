#include <stdio.h>
#include <stdlib.h>  // malloc

#define DATATYPE char

#include "tree.h"

int main() {
  TreeNode a, b, c, d, e, f;
  TreeNode* root;
  TreeNode* p;

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

  // 그림 8-19 예제 (1) - malloc을 사용하는 버전
  p = (TreeNode*)malloc(sizeof(TreeNode));

  root = p;
  
  p->data  = 'A';
  p->left  = (TreeNode*) malloc(sizeof(TreeNode));
  p->right = (TreeNode*) malloc(sizeof(TreeNode));
  
  p->left->data  = 'B';  // p : A, p->left : B
  p->left->left  = (TreeNode*) malloc(sizeof(TreeNode));
  p->left->right = (TreeNode*) malloc(sizeof(TreeNode));

  p->right->data  = 'C';  // p->right : C
  p->right->left  = (TreeNode*) malloc(sizeof(TreeNode));
  p->right->right = NULL;

  p->left->left->data  = 'D';  // p->left->left: D
  p->left->left->left  = NULL;
  p->left->left->right = NULL;

  p->left->right->data  = 'E'; // p->left->right: E
  p->left->right->left  = NULL;
  p->left->right->right = NULL;

  p->right->left->data  = 'F'; // p->right->left : F
  p->right->left->left  = NULL;
  p->right->left->right = NULL;

  
  // 그림 8-19 예제 (2)

  // Q. 여러분이 스스로 작성해보세요.
  //  - malloc을 사용하지 않는 버전
  //  - malloc을 사용하는 버전
  
  return 0;
}
