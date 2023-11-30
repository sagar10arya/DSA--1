#include<bits/stdc++.h>
using namespace std;

class Stack{
    public:
        int *arr;
        int top;
        int size;

    Stack(int size){
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element){
        if(size - top > 1){
            top++;
            arr[top] = element;
        }
        else{
            cout<<"Stack Overflow"<<endl;
        }
    }

    void pop(){
        if(top >= 0){
            top--;
        }
        else{
            cout<<"Stack Underflow"<<endl;
        }
    }

    int peek(){
        if(top >= 0){
            return arr[top];
        }
        else{
            cout<<"Stack is Empty"<<endl;
            return -1;
        }
    }

    bool isEmpty(){
        if(top == -1) return true;
        else return false;
    }
};


int main(){

    Stack st(5);

    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(40);
    st.push(40);


    cout << st.peek() <<endl;

    st.pop();

    cout << st.peek() <<endl;

    if(st.isEmpty()){
        cout<<"Stack is Empty"<<endl;
    }
    else{
        cout<<"Stack is not empty"<<endl;
    }

/*
    // creation of Stack
    stack<int> s;

    // push operation
    s.push(2);
    s.push(3);

    // pop operation
    s.pop();

    cout<<"Printing top element "<<s.top()<<endl;

    if(s.empty()){
        cout<<"Stack is Empty"<<endl;
    }
    else{
        cout<<"Stack is not empty"<<endl;
    }

    cout<<"Prinitng size of stack "<<s.size()<<endl;
*/

    return 0;
}