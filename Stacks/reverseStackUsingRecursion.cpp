/*----Reverse a Stack using recurusion----*/
#include<bits/stdc++.h>
using namespace std;

void insertAtBottom(stack<int> &s, int element){
    // Base Case
    if(s.empty()){
        s.push(element);
        return;
    }

    int num = s.top();
    s.pop();

    // reecursive call
    insertAtBottom(s,element);

    s.push(num);

}

void reverseStack(stack<int> &stack){
    // base case
    if(stack.empty()){
        return;
    }

    int num = stack.top();
    stack.pop();

    // Recursive call
    reverseStack(stack);

    insertAtBottom(stack, num);
}