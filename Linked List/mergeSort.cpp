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

Node* findMid(Node* head){
    Node* slow = head;
    Node* fast = head->next;

    while(fast != NULL && fast->next == NULL){
        slow = slow->next;
        fast = fast -> next -> next;
    }
    return slow;
}

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

Node* mergeSort(Node* head){
    // Base Case
    if(head == NULL || head->next == NULL){
        return head;
    }

    // break linked lists into two halves, after finding mid
    Node* mid = findMid(head);

    Node* left = head;
    Node* right = mid->next;
    mid->next = NULL;

    // Recursive calls to sort both halves
    left = mergeSort(left);
    right = mergeSort(right);

    // Merge both left and right halves
    Node* result = merge(left,right);

    return result;
}