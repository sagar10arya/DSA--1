#include<bits/stdc++.h>
using namespace std;
/*
fibonacci series = 0, 1, 1, 2, 3, 5, 8, 13, 21, ...
*/
int fib(int n){
    // Base Case
    if(n == 0) return 0;
    if(n == 1) return 1;

    return fib(n-1) + fib(n-2);


    // recursive relation
}

int main(){

    int n;
    cin>>n;

    int ans = fib(n);
    cout<<n<<"th fibonacci number is: "<< ans <<endl;

    return 0;
}