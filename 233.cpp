//linked list
//single ll
#include<iostream>
using namespace std;
class Node
{
    public:
    int data;  
    Node* next;
    //constructor
    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
    //destructor
    ~Node() {
        int value = this -> data;
        //memory free
        if(this -> next != NULL){
            delete next;
            this -> next = NULL;
        }
        cout << "memory is free for node with data" <<value << endl;
    }

    };
    void insertionAtHead(Node* &head, int d)
    {
        //new node 
        Node* temp = new Node(d);
        temp -> next = head;
        head = temp;
    }
    void print(Node* &head)
    {
        Node* temp = head; 
        while(temp != NULL){
            cout << temp -> data << " ";
            temp = temp -> next;
        }
        cout << endl;
    }
    void insertAtTail(Node* &tail, int d)
    {
      //create a  new node 
      Node* temp = new Node(d);
      tail -> next = temp;
      tail = tail -> next;
    }
    void insertAtPosition(Node* &head,int position , int d)
    {
        Node* temp = head;
        int cnt = 1;
        while(cnt < position-1)
        {
            temp = temp -> next;
            cnt++;
        }
        //inserting at last position
        if(temp -> next == NULL){
            insertAtTail(tail,d);
            return;
        }
        //creating a node for d
        Node* nodetoinsert = new Node(d);
        nodetoinsert -> next = temp -> next;
        temp -> next = nodetoinsert;
    }

    void deleteNode(int position, Node* &head){

        //deleting first or start node
        if(position == 1){
            Node* temp = head;
            head = head -> next;
            //memory free start node
            temp -> next = NULL;
            delete temp;
        }
        else
        {
            //deleting any middle or last node
            Node* curr = head;
            Node* prev = NULL;

            int cnt=1;
            while(cnt < position){
                prev = curr;
                curr = curr -> next;
                cnt++;
            }
            prev -> next = curr -> next;
            curr -> next = NULL;
            delete curr;
        }
    }
    void insertNode(Node* &tail,int element,int d)
{
    //empty list
    if(tail == NULL){
    Node* newnode = new Node(d);
    tail = newnode;
    newnode -> next = newnode;
    }
    else{
            //non empty list 
            //assuming that element is present in list

            Node* curr = tail;

            while(curr -> data != element)
            {
                curr=curr -> next;
            }
            //element found -> current is representing element wala node

            Node* temp = new Node(d);
            temp -> next = curr -> next;
            curr -> next = temp;

    }
}

int main(){
    //created a node
    Node* node1 = new Node(10);
    //Node* head = NULL;
    //cout << node1 -> data << endl;
    //cout << node1 -> next << endl;

    //head pointed to node1
    Node* head = node1;
    Node* tail= node1;
    //print(head);

    insertAtTail(tail, 5);
    print(head);
    insertAtTail(tail, 22);
    print(head);
    //insertAtPosition(head,3, 15);
    //print(head);
    ////deleteNode(4, head);
    //print(head);
    insertAtTail(tail, 8);
    print(head);
    //insertNode(tail, 2 , 3);
    //print(tail);

    return 0;  
}
 