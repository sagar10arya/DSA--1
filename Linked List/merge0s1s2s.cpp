#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
    ~Node(){
        int value = this->data;
        // Memory free
        if(this->next != NULL){
            delete next;
            this->next = NULL;
        }
        cout<<"Memory freed at value "<<value<<endl;
    }
};

Node* merge(Node* &head){

    int zeroCount = 0;
    int oneCount = 0;
    int twoCount = 0;

    Node* temp = head;

    while(temp != NULL){
        if(temp->data == 0){
            zeroCount++;
        }
        else if(temp->data == 1){
            oneCount++;
        }
        else if(temp->data == 2){
            twoCount++;
        }
        temp = temp->next;
    }

    temp = head;
    while(temp != NULL){
        if(zeroCount != 0){
            temp->data = 0;
            zeroCount--;
        }
        else if(oneCount != 1){
            temp->data = 1;
            oneCount--;
        }
        else if(twoCount != 2){
            temp->data = 2;
            twoCount--;
        }
        temp = temp->next;
    }
    return head;
}

void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}


void insertionAtHead(Node* &head, int d){

    // create new node
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}

// Approach 2 for merge of 0s,1s,2s
Node* sortList(Node* &head){
    // Making a dummy node
    Node* zeroHead = new Node(-1);
    Node* zeroTail = zeroHead;
    Node* oneHead = new Node(-1);
    Node* oneTail = oneHead;
    Node* twoHead = new Node(-1);
    Node* twoTail = twoHead;

    Node* curr = head;
    // Create seperate list of 0s,1s,2s
    while(curr != NULL){
        int value = curr->data;

        if(value == 0){
            insertAtTail(zeroTail,curr);
        }

        else if(value == 1){
            insertAtTail(oneTail,curr);
        }

        if(value == 2){
            insertAtTail(twoTail,curr);
        }

        curr = curr->next;
    }

    // Merge 3 sublist

    // 1s List not empty
    if(oneHead->next != NULL){
        zeroTail->next = oneHead->next;
    }
    else{
        zeroTail->next = twoHead->next;
    }
    oneTail->next = twoHead -> next;
    twoTail->next = NULL;

    // setup head
    head = zeroHead->next;

    // Delete Dummy Nodes
    delete zeroHead;
    delete oneHead;
    delete twoHead;

    return head;

}

void insertAtTail(Node* &tail, Node* curr){
    tail->next= curr;
    tail = curr;
}


int main(){

    Node* node1 = new Node(1);

    // head pointed to node1
    Node* head = node1;
    
    insertionAtHead(head,0);
    insertionAtHead(head,2);
    insertionAtHead(head,0);
    insertionAtHead(head,1);
    insertionAtHead(head,1);
    print(head);

    merge(head);
    print(head);

    // sortList(head);
    // print(head);


    return 0;
}