#include <bits/stdc++.h>
using namespace std;

// Definition for singly-linked list.
struct ListNode
{   
    ListNode* val;
    ListNode *next;
};

void reverse(ListNode *&head, ListNode *current, ListNode *prev)
{
    // Base Case
    if (current == NULL)
    {
        head = prev;
        return;
    }

    ListNode *forward = current->next;
    reverse(head, forward, current);
    current->next = prev;
}

// It will return the head of reverse list
ListNode *reverse2(ListNode *&head)
{
    // Base Case
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    ListNode *chotahead = reverse2(head->next);

    head->next->next = head;
    head->next = NULL;

    return chotahead;
}

class Solution
{
public:
    ListNode *reverseList(ListNode *head)
    {

        // Recursive Approach 2
        return reverse2(head);

        // Recursive Approach 1
        /*
        ListNode* current = head;
        ListNode* prev = NULL;

        reverse(head,current,prev);
        return head;
        */

        // Iterative Approach
        /*
        if( head == NULL || head->next == NULL){
            return head;
        }

        ListNode* prev = NULL;
        ListNode* current = head;
        ListNode* forward = NULL;

        while(current != NULL){
            forward = current->next;
            current->next = prev;
            prev = current;
            current = forward;
        }
        return prev;
        */
    }
};