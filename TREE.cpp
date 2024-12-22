#include "TREE.h"

adrNode newNode_103012300198(int x)
{
    adrNode P = new Node;
    info(P) = x;
    left(P) = NULL;
    right(P) = NULL;

    return P;
}

void insertNode_103012300198(adrNode &root, adrNode p)
{
    if (root == NULL) {
        root = p;
    } else if (info(p) < info(root)) {
        insertNode_103012300198(left(root), p);
    } else if (info(p) > info(root)) {
        insertNode_103012300198(right(root), p);
    }
}

void deleteNode_103012300198(adrNode &root, adrNode &p)
{
    if (root == NULL) {
        return;
    }

    if (info(p) < info(root)) {
        deleteNode_103012300198(left(root), p);
    } else if (info(p) > info(root)) {
        deleteNode_103012300198(right(root), p);
    } else {
        // Jika node adalah daun
        if (left(root) == NULL && right(root) == NULL) {
            root = NULL;
        // Jika node punya satu anak, anak nya di kanan
        } else if (left(root) == NULL) {
            root = right(root);
        // Jika node punya sat anak, anak nya di kiri
        } else if (right(root) == NULL) {
            root = left(root);
        // Jika node punya 2 anak
        } else {
            adrNode tmp = findMin_103012300198(right(root));
            info(root) = info(tmp);
            deleteNode_103012300198(right(root), tmp);
        }
    }
}

void printInOrder_103012300198(adrNode root)
{
    if (root != NULL) {
        printInOrder_103012300198(left(root));
        cout << info(root) << " ";
        printInOrder_103012300198(right(root));
    }
}
adrNode findMin_103012300198(adrNode root)
{
    if (root == NULL) {
        return NULL;
    }

    if (left(root) == NULL) {
        return root;
    }

    return findMin_103012300198(left(root));
}
