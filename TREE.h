#ifndef TREE_H_INCLUDED
#define TREE_H_INCLUDED

#include <iostream>
#define info(P) P->info
#define right(P) P->right
#define left(P) P->left

using namespace std;

typedef struct Node *adrNode;

struct Node
{
    int info;
    adrNode left;
    adrNode right;
};

adrNode newNode_103012300198(int x);
void insertNode_103012300198(adrNode &root, adrNode p);
void deleteNode_103012300198(adrNode &root, adrNode &p);
void printInOrder_103012300198(adrNode root);
adrNode findMin_103012300198(adrNode root);

#endif // TREE_H_INCLUDED
