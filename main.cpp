#include "TREE.h"

int main() {
    adrNode root = NULL;
    int values[9] = {8, 9, 12, 13, 15, 17, 7, 6, 4};


    for (int i = 0 ; i < 9 ; i++) {
        adrNode newNodePtr = newNode_103012300198(values[i]);
        insertNode_103012300198(root, newNodePtr);
    }

    // Cetak BST awal secara in-order
    cout << "BST awal (in-order):\n";
    printInOrder_103012300198(root);
    cout << endl;

    // Menghapus elemen dari BST satu per satu
    for (int i = 0 ; i < 9 ; i++ ) {
        adrNode nodeToDelete = newNode_103012300198(values[i]);
        deleteNode_103012300198(root, nodeToDelete);
        cout << "BST setelah menghapus " << values[i] << ":\n";
        printInOrder_103012300198(root);
        cout << endl;
    }

    return 0;
}
