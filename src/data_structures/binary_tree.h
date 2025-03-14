#ifndef BINARY_TREE_H
#define BINARY_TREE_H

typedef struct BinaryTreeNode_
{

    void *data;
    BinaryTreeNode_ *left;
    BinaryTreeNode_ *right;
} BinaryTreeNode;

typedef struct BinaryTree_
{
    int size;

    void (*compare)(const void *key1, const void *key2);
    void (*destroy)(void *data);

    BinaryTreeNode *root;
} BinaryTree;

#endif