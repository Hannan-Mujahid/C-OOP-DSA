#include <iostream>
using namespace std;

/* ===== Node class ===== */
class Node {
public:
    int data;           // node ka data
    Node* nextNode;     // aglay node ka address

    Node(int value) {
        data = value;
        nextNode = NULL;
    }
};

/* ===== Linked List class ===== */
class LinkedList {
public:
    Node* headNode;     // list ka start (engine)

    LinkedList() {
        headNode = NULL;    // start me list khali
    }

    // ===== PUSH BACK (insert at end) =====
    void pushBack(int value) {

        // 1) naya node create karo
        Node* newCreatedNode = new Node(value);

        // 2) agar list khali hai
        if (headNode == NULL) {
            headNode = newCreatedNode;   // pehla node
            return;
        }

        // 3) traversal ke liye current node
        Node* currentNode = headNode;

        // 4) last node tak jao
        while (currentNode->nextNode != NULL) {
            currentNode = currentNode->nextNode;
        }

        // 5) last node ke baad naya node jor do
        currentNode->nextNode = newCreatedNode;
    }

    // ===== Display function =====
    void displayList() {
        Node* currentNode = headNode;

        while (currentNode != NULL) {
            cout << currentNode->data << " -> ";
            currentNode = currentNode->nextNode;
        }
        cout << "NULL";
    }
};

/* ===== Main function ===== */
int main() {

    LinkedList myList;

    myList.pushBack(10);
    myList.pushBack(20);
    myList.pushBack(30);

    myList.displayList();

    return 0;
}
