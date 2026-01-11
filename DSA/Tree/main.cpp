#include<iostream>
#include "BinaryTree.h"
using namespace std;

int main(){
    BinaryTree tree;

    tree.setRoot(10);
    tree.addLeft(tree.root, 20);
    tree.addRight(tree.root, 30);

    cout<<"Inorder Traversal: ";
    tree.inorder(tree.root);

    return 0;
}