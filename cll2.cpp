#include<iostream>
using namespace std;

class Node {
public:
    int element;
    int d; 
    Node* next;

    Node(int element, int d) : element(element), d(d), next(nullptr) {}
};

void insertNode(Node*& tail, int element, int d) {
    if (tail == nullptr) {
        Node* newnode = new Node(element, d);
        tail = newnode;
        newnode->next = newnode;
    } else {
        Node* curr = tail;
        while (curr->next!= tail) {
            curr = curr->next;
        }
        Node* temp = new Node(element, d);
        temp->next = tail->next;
        tail->next = temp;
        tail = temp;
 }
}

void print(Node* head) {
    Node* temp = head;
    do {
        cout << temp->element << " ";
        temp = temp->next;
    } while (temp!= head);
    cout << endl;
}

void insertAtTail(Node*& tail, int d) {
    Node* temp = new Node(d, d);
    if (tail == nullptr) {
        tail = temp;
        tail->next = tail;
    } else {
        temp->next = tail->next;
        tail->next = temp;
        tail = temp;
    }
}

int main() {
    Node* tail = nullptr;
    insertAtTail(tail, 5);
    print(tail);
    insertAtTail(tail, 7 );
    print(tail);
    insertAtTail(tail, 4);
    print(tail);
    insertNode(tail, 2, 3);
    print(tail);
return 0;
}