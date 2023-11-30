#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    // Contructor
    Node(int d){
        this->data = d;
        this->next = NULL;
    }
    
    // Destructor
    ~Node(){
        int value = this->data;
        if(next != NULL){
            delete next;
            next = NULL;
        }
        cout<<"Memory freed for the value "<<value<<endl;
    }
};

// Traversing A Linked List
void print(Node* &tail){
    Node* temp = tail;

    if(tail == NULL){
        cout<<"Tail is Empty"<<endl;
        return;
    }
    
    do{
        cout<<tail->data<<" ";
        tail = tail->next;
    } while(tail != temp);
    cout<<endl;
}

void insertNode(Node* &tail, int element, int d){
    // Assuming that the element is present in the list
    
    // Empty List
    if(tail == NULL){
        Node* temp = new Node(d);
        tail = temp;
        temp->next = temp;
    }
    else
    {
        // Non empty list
        Node* current = tail;

        while(current->data != element){
            current = current->next;
        }

        // Element Found --> current is representing element wala node
        Node* temp = new Node(d);
        temp->next = current->next;
        current->next = temp;

    }
}

bool isCircular(Node* &head){
    if(head == NULL) return false;

    Node* temp = head->next;
    while(temp != NULL && temp != head){
        temp = temp->next;
    }
    if(temp == head) return true;

    return false;
}


int main(){

    Node* tail = NULL;


    insertNode(tail, 4, 3);
    print(tail);

    insertNode(tail, 3, 6);
    print(tail);
/*
    insertNode(tail, 3, 6);
    print(tail);

    insertNode(tail, 6, 9);
    print(tail);

    insertNode(tail, 9, 15);
    print(tail);

    insertNode(tail, 15, 18);
    print(tail);

    insertNode(tail, 3, 4);
    print(tail);
*/



    if(isCircular(tail)){
        cout<<"Linked List is Circular"<<endl;
    }
    else{
        cout<<"No Circular"<<endl;
    }

    return 0;
}