/* FLATTEN A LINKED LIST  */
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
};

Node* merge(Node* &left, Node* &right){
    if(left == NULL) return right;
    if(right == NULL) return left;

    Node* ans = new Node(-1);
    Node* temp = ans;

    // merge 2 sorted LL
    while(left != NULL && right != NULL){
        if(left->data < right->data){
            temp->next = left;
            temp = left;
            left = left->next;
        }
        else{
            temp->next = right;
            temp = right;
            right = right->next;
        }
    }

    while(left != NULL){
        temp->next = left;
        temp = left;
        left = left->next;
    }

    while(left != NULL){
        temp->next = right;
        temp = right;
        right = right->next;
    }
    ans = ans->next;
    return ans;
}
Node* flatten(Node* &head){

    // Base Case
    if(head == NULL || head->next == NULL) return head;

    // Recursive for list on right
    Node* right= flatten(head->next);

    // Now Merge
    head = merge(head, head->next);

    return head;
}

int main(){

    // flatten(head);
    // print(head);



    return 0;
}