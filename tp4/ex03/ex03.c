#include <stdio.h>
#include <stdlib.h>
#define COUNT 10


typedef struct b_tree {
	int data;
	struct b_tree * left;
	struct b_tree * right;
} b_tree;
typedef struct b_tree * tree;

tree makeTree(int x, tree A1, tree A2) {
    tree A = (tree)malloc(sizeof(b_tree));
    A->data = x;
    A->left = A1;
    A->right = A2;
    return A; 
}

int max(int x, int y) {
    if(x > y)
        return x;
    else 
        return y;
}

int max_depth(tree A) {
	if(A==NULL) 
        return 0;
    
    return 1 + max(max_depth(A->left), max_depth(A->right));
}

void left_rotation(tree *T)
{
    if(*T==NULL||(*T)->right==NULL)
        return;
    tree temp=(*T)->right;
    (*T)->right=temp->left;
    temp->left=*T;
    *T=temp;
    return;
}

void right_rotation(tree *T)
{
    if(*T==NULL||(*T)->left==NULL)
        return;
    tree temp=(*T)->left;
    (*T)->left=temp->right;
    temp->right=*T;
    *T=temp;
    return;
}

void AVL(tree *T) {
    if(max_depth((*T)->left) - max_depth((*T)->right)==-2)
    {
        if(max_depth((*T)->right->right) < max_depth((*T)->right->left))
        {
            right_rotation(&(*T)->right);
            left_rotation(T);
            return ;
        }
        else
        {
            left_rotation(T);
            return;
        }
    }
    if(max_depth((*T)->left) - max_depth((*T)->right)==2)
    {
        if(max_depth((*T)->left->left) < max_depth((*T)->left->right))
        {
            left_rotation(&(*T)->left);
            right_rotation(T);
            return ;
        }
        else
        {
            right_rotation(T);
            return;
        }
    }
    return;
}

//Print_Tree
void print2DUtil(tree root, int space)
{
    // Base case
    if (root == NULL)
        return;
  
    // Increase distance between levels
    space += COUNT;
  
    // Process right child first
    print2DUtil(root->right, space);
  
    // Print current node after space
    // count
    printf("\n");
    for (int i = COUNT; i < space; i++)
        printf(" ");
    printf("%d\n", root->data);
  
    // Process left child
    print2DUtil(root->left, space);
}
void print2D(tree root)
{
   // Pass initial space count as 0
   print2DUtil(root, 0);
}

int main() {
    tree B3 = makeTree(4, NULL, NULL);
    tree A1 = makeTree(3, NULL, B3);
    tree A2 = makeTree(2, NULL, A1);
    tree A = makeTree(1, NULL, A2);
    print2D(A);
    AVL(&A);
    print2D(A);
    return 0;
}