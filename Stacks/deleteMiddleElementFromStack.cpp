#include<bits/stdc++.h>
using namespace std;

void solve(stack<int>&inputStack, int count, int size){
    // Base Case
    if(count == size/2){
        inputStack.pop();
        return;
    }
    int num = inputStack.top();
    inputStack.pop();

    // Recursive Call
    solve(inputStack, count+1, size);

    inputStack.push(num);
}

void deleteMiddle(stack<int>&inputStack, int count, int size){
    int count = 0;
    solve(inputStack,count,size);
}

int main(){
      

    return 0;
}