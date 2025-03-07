#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = NULL; 
    }
};

void insertNode(Node* nd, int data, Node*& tail, Node*& head) { 
    Node* temp = new Node(data);
    if (nd == NULL) {
        cout << "This is first Node " << endl;
        head = temp;
        tail = temp;
        return;
    }

    nd->next = temp;
    tail = temp;
}

void printLL(Node* nd) {
    cout << endl << "Printing LL" << endl;
    Node* temp = nd; 
    while (temp != NULL) { 
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;

    insertNode(head, 1, tail, head); 
    insertNode(tail, 2, tail, head);
    printLL(head);

    return 0;
}

