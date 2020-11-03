#include <stdio.h>
#include <stdlib.h>  // malloc

#define DATATYPE char

#include "tree.h"


int get_node_count(TreeNode* bt) {
  if (bt == NULL) return 0;
  else {
    return 1 + get_node_count( bt->left ) +  get_node_count( bt->right );
  }
}

int get_height(TreeNode* bt) {
  if (bt == NULL) return 0;
  else {
    int h1, h2, h;

    h1 = get_height(bt->left);
    h2 = get_height(bt->right);

    h = h1 > h2 ? h1 : h2;  // max(h1,h2)

    return h + 1;     
  }
}

int get_leaf_node(TreeNode* bt) {
  if (bt == NULL) return 0;
  else {
    // (1) terminal(leaf)이거나

    if (bt->left == NULL && bt->right == NULL)
      return 1;

    // (2) nonterminal
    else {
      // bt->left == NULL && bt->right == NULL    ==    FALSE
      // ! (bt->left == NULL && bt->right == NULL)    ==    TRUE
      // bt->left != NULL || bt->right != NULL    ==    TRUE

      return get_leaf_node(bt->left) +  get_leaf_node(bt->right);
    }
  }
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


