#ifndef BINARYTREE_H
#define BINARYTREE_H

#include "Node.h"

class BinaryTree{
    public:
        Node* root;

        BinaryTree();

        void setRoot(int value);
        void addLeft(Node* parent, int value);
        void addRight(Node* parent, int value);
        void inorder(Node* node);
};

#endif  