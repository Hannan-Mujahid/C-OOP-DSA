#ifndef NODE_H
#define NODE_H

class Node;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int value); 
};

#endif
