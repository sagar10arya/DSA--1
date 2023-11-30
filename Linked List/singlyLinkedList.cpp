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

void insertionAtHead(Node* &head, int d){

    // create new node
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}

void insertionAtTail(Node* &tail, int d){

    // create new node
    Node* temp = new Node(d);
    tail->next = temp;
    tail = temp;                  // tail = tail->next;
    
}

void insertAtPosition(Node* &tail, Node* &head, int position, int d){

    // Insert at starting position
    if(position == 1){
        insertionAtHead(head,d);
        return;
    }

    Node* temp = head;
    int count = 1;

    while(count < position-1){
        temp = temp->next;
        count++;
    }

    // Inserting At Last Position
    if(temp->next == NULL){
        insertionAtTail(tail,d);
        return;
    }

    // Create a node for d
    Node* nodeToInsert = new Node(d);
    
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}


void deleteNode(int position, Node* &head){

    // Deleteing at first or start node
    if(position == 1){
        Node* temp = head;
        head = head->next;
        //Memory free start
        temp->next = NULL;
        delete temp;
    }
    else{
        // Deleting at middle and last node
        Node* current = head;
        Node* prev = NULL;
        
        int cnt = 1;

        while(cnt < position){
            prev = current;
            current = current->next;
            cnt++;
        }

        prev->next = current->next;
        //Memory Free
        current->next = NULL;
        delete current;
    }
}

    /*Traversing A Node*/
void print(Node* &head){
    Node* temp = head;

    while(temp != NULL){
        cout<< temp->data << " ";
        temp = temp->next;
    }
    cout<<endl;
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

bool detectLoop(Node* head){
    
    if(head == NULL) return false;

    map<Node*, bool> visited;

    Node* temp = head;

    while(temp != NULL){
        // cycle is present
        if(visited[temp] == true) {
            cout<<"Present on element "<< temp->data <<endl;
            return true;
        }
        visited[temp] = true;
        temp = temp->next;
    }
    return false;  
}


int main(){

    // Created a new node
    Node* node1 = new Node(10);
    // cout<< node1->data <<endl;
    // cout<< node1->next <<endl;

    // head pointed to node1
    Node* head = node1;
    Node* tail = node1;

    print(head);
    // insertionAtHead(head,12);
    // print(head);
    // insertionAtHead(head,15);
    // print(head);  

    insertionAtTail(tail,20);
    print(head);

    insertionAtTail(tail,30);
    print(head);

    insertionAtTail(tail,40);
    print(head);

    insertAtPosition(tail,head,4,45);
    print(head);

    cout << "Head "<< head -> data <<endl;
    cout << "Tail "<< tail -> data <<endl;

    // deleteNode(3,head);
    // print(head);

    
    if(isCircular(tail)){
        cout<<"Linked List is Circular"<<endl;
    }
    else{
        cout<<"No Circular"<<endl;
    }

    
    if(detectLoop){
        cout<<"Loop is present"<<endl;
    }
    else{

        cout<<"Loop is not present"<<endl;
    }


    return 0;
}