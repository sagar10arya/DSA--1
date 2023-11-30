// Implementingn two stacks in a single array
#include<bits/stdc++.h>
using namespace std;

class twoStack{
    private:
        int *arr;
        int top1;
        int top2;
        int size;

    public:
    // Initialize two stacks
        twoStack(int s){
            this->size = s;
            arr = new int[s];
            top1 = -1;
            top2 = s;
        }
    
    // Push in Stack 1
    void push1(int num){
        // Atleast a empty space present
        if( top2 - top1 > 1){
            top1++;
            arr[top1] = num;
        }
        else{
            cout<<"Stack Overflow"<<endl;
        }
    }

    // Push in stack 2
    void push2(int num){
        // Atleast 1 empty space present
        if(top1 - top2 > 1){
            top2--;
            arr[top2] = num;
        }
        else{
            cout<<"Stack Overflow"<<endl;
        }
    }

    // Pop from stack 1 and return pop
    int pop1(){
        if(top1 >= 0){
            int ans = arr[top1];
            top1--;
            return ans;
        }
        else{
            return -1;
        }
    }

    // Pop from stack 2 and return pop
    int pop2(){
        if(top2 < size){
            int ans = arr[top2];
            top2++;
            return ans;
        }
        else{
            return -1;
        }
    }

};