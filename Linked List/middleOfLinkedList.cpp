#include<bits/stdc++.h>
using namespace std;


class Node{
    public:
    int data;
    Node* next;

    // Contructor
    Node(int data){
        this->data = data;
        this->next = NULL;
    }

    // Destructor
    ~Node(){
        int value = this->data;
        // Memory Free
        if(this->next != NULL){
            delete next;
            this->next = NULL;
        }
        cout<<"Memory is freed for node with data "<< value << endl;
    }
};

Node* getMiddle(Node* head){
    if( head == NULL || head->next = NULL){
        return head;
    }

    // 2 nodes
    if(head->next->next == NULL){
        return head->next;
    }

    Node* slow = head;
    Node* fast = head->next;

    while(fast != NULL){
        fast = fast->next;
        if(fast != NULL){
            fast = fast->next;
        }

        slow = slow->next;
    }
    return slow;
}

Node* findMiddle(Node* head){
    return getMiddle(head);
}
