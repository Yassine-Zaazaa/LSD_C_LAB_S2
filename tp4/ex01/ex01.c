#include <stdio.h>
#include <stdlib.h>

// Question 1
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

//Question 2
int max(int x, int y) {
    if(x > y)
        return x;
    else 
        return y;
}

int tree_depth(tree A) {
	if(A==NULL) 
        return 0;
    
    return 1 + max(tree_depth(A->left), tree_depth(A->right));
}

//Question 3

int tree_diameter(tree A) {
    if(A == NULL)
        return 0;
    int left_depth = tree_depth(A->left);
    int right_depth = tree_depth(A->right);
    int left_diameter = tree_diameter(A->left);
    int right_diameter = tree_diameter(A->right);
    return max(left_depth + right_depth + 1, max(left_diameter, right_diameter));
}

//Question 4
int leaf(tree A) {
    if(A->left == NULL && A->right == NULL)
        return 1;
    return 0;
}

int leaf_sum(tree A) {
    int sum = 0;
    if(A==NULL) {
        return 0;
    }
    if(A->left == NULL && A->right == NULL)
        sum += A->data;
    return leaf_sum(A->left) + leaf_sum(A->right);
}

//Question 5
int main() {
    tree B1 = makeTree(5, NULL, NULL);
    tree B2 = makeTree(18, NULL, NULL);
    tree B3 = makeTree(48, NULL, NULL);
    tree A1 = makeTree(4, B1, B2);
    tree A2 = makeTree(9, B3, NULL);
    tree A = makeTree(15, A1, A2);
    printf("depth : %d\n", tree_depth(A));
    printf("diam : %d\n", tree_diameter(A));
    printf("leaf sum: %d\n", leaf_sum(A));
    return 0;
}