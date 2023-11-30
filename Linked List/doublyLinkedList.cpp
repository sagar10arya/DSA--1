#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    Node(int data){
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }

    ~Node(){
        int value = this->data;
        if(next != NULL){
            delete next;
            next = NULL;
        }
        cout<<"Memory freed for value "<<value<<endl;
    }
};

// Traversing a Linked List
void print(Node* &head){
    Node* temp = head;
    
    while(temp != NULL){
        cout<< temp->data << " ";
        temp = temp->next;
    }
    cout<<endl;
}

// Gives length of the Linked List
int getLength(Node* head){
    int length = 0;
    Node* temp = head;
    
    while(temp != NULL){
        length++;
        temp = temp->next;
    }
    return length;
}

void insertAtHead(Node* &tail, Node* &head, int d){

    // If Empty list
    if(head == NULL){
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else{
        // Create a new Node
        Node* temp = new Node(d);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
    
}

void insertAtTail(Node* &tail,Node* &head, int d){
    // If Empty list
    if(tail == NULL){
        Node* temp = new Node(d);
        tail = temp;
        head = temp;
    }
    else{
        // Create a new Node
        Node* temp = new Node(d);
        tail->next = temp;
        temp->prev = tail;
        tail = temp; 
    }
    
}

void insertAtPosition(Node* &tail, Node* &head, int position, int d){

    // Insertion at Statring position
    if(position == 1){
        insertAtHead(tail,head,d);
        return;
    }

    Node* temp = head;
    int cnt = 1;

    while(cnt < position-1){
        temp = temp->next;
        cnt++;
    }

    // Insert At Last Position
    if(temp->next == NULL){
        insertAtTail(tail,head,d);
        return;
    }

    // Insert At Position

    // Create A Node for d
    Node* nodeToInsert = new Node(d);

    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;    
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;


}

void deleteNode(int position, Node* &head)
{
    // Deleteing at first or start node
    if(position == 1){
        Node* temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;
        // Memory free
        delete temp;
    }
    else{
        // Deleting at middle and last node
        Node* current = head;
        Node* prev = NULL;

        int cnt=1;
        while(cnt < position){
            prev = current;
            current = current->next;
            cnt++;
        }

        current->prev = NULL;
        prev->next = current->next;
        current->next = NULL;
        delete current;
    }
}

int main(){


    Node* node1 = new Node(5);
    Node* head = node1;
    Node* tail = node1;

    print(head);
    cout<<"Length of Linked List "<<getLength(head)<<endl;

    insertAtHead(tail, head, 10);
    print(head);

    insertAtHead(tail, head, 15);
    print(head);

    insertAtTail(tail, head, 30);
    print(head);

    insertAtPosition(tail,head,2,45);
    print(head);
    
    deleteNode(3,head);
    print(head);





    return 0;
}