#include<bits/stdc++.h>
using namespace std;

int printCounting(int n){
    // Base Case
    if(n == 0) return 1;

    cout<<n<<" ";
    printCounting(n-1);
}

int main(){

    int n;
    cin>>n;

    printCounting(n);








    return 0;
}