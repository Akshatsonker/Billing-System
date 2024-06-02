#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* prev;
    Node* next;

    //constructor;
    Node(int d){
        this -> data = d;
        this -> prev = NULL;
        this -> next = NULL;
    }
};
void print(Node* head){
    Node* temp = head; 

    while(temp != NULL){
        cout << temp -> data;
        temp = temp -> next;
    } 
    cout<<endl;
}
int getlength(Node* head){
    int len=0;
    Node* temp = head;
    while(temp != NULL){
        len++;
        temp = temp -> next;
    }
  return len;
}
void insertAtHead(Node* &head, int d )
{
    //empty list
    if(head == NULL){
        Node* temp = new Node(d);
        head=temp;
    }
    else{
        Node* temp=new Node(d);
        temp -> next = head;
        head -> prev = temp;
        head = temp;
    }
}
void deletenode(int position , Node* &head)
{
    //deleting first node
    if(position == 1)
    {
        Node* temp = head;
        temp  -> next -> prev = NULL;
        head = temp -> next;
        temp -> next = NULL;
        delete temp;
    }
    else{
    //deleting any midddle or last node
Node* curr = head;
Node* prev = NULL;
int cnt = 1;
while(cnt < position){
    prev = curr;
    curr = curr -> next;
    cnt++;
}
curr -> prev = NULL;
prev -> next = curr -> next;
curr -> next = NULL;
delete curr;
}
}
//revese a single ll
Node* reverseLinkedList(Node* head)
{
    if(head == NULL || head -> next == NULL)
    {
        return head;
    }
    Node* prev = NULL;
    Node* curr = head;
    Node* forward = NULL;

    while(curr  != NULL){
        forward = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = forward;
    }
    return prev;
}
//reverse through recursion
Node* reverse1(Node* head){
    //base case
    if(head == NULL || head -> next == NULL){
        return head;
    }
    Node* chotahead = reverse1(head -> next);
    head -> next -> next = head;
    head -> next = NULL;
    return chotahead;
}

//reverse dll
Node* reversedoublyLinkedList(Node* &head)
{
    Node* prev = nullptr;
    Node* current = head;
    Node* temp;

    // Iterate until the end of the list
    while (current != nullptr)
    {
        temp = current->next; // Store the next node
        current->next = prev; // Reverse the link
        current->prev = temp; // Update the previous link

        // Move to the next pair of nodes
        prev = current;
        current = temp;
    }

    return prev; // The new head of the reversed list
}


int main(){
    Node* node1 = new Node(5);
    Node* head = node1;
    print(head);
   // cout << getlength(head)<<endl;
    insertAtHead(head, 7 );
    print(head);
    insertAtHead(head, 9 );
    print(head);
    //insertAtHead(head, 11 );
   // print(head);
   // reverse1(head);
    //cout<<reverseLinkedList(head)<<endl;;
   // print(head);
    //deletenode(2 ,head);
    //print(head);
    reversedoublyLinkedList(head);
    print(head);

    return 0;
}