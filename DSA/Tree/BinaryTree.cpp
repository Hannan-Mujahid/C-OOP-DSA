#include "BinaryTree.h"
#include<iostream>
using namespace std;

BinaryTree::BinaryTree(){
    root = nullptr;
}

void BinaryTree::setRoot(int value){
    root = new Node(value);
}

void BinaryTree::addLeft(Node* parent, int value){
    parent->left = new Node(value);
}

void BinaryTree::addRight(Node* parent, int value){
    parent-> right = new Node(value);
}

void  BinaryTree::inorder(Node* node){
    if (node == nullptr)
        return;

        inorder(node->left);
        cout<<node->data<<" ";
        inorder(node->right);
}

