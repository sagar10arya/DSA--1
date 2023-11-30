#include <bits/stdc++.h>
using namespace std;

void pattern1(int n){

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
 
void pattern2(int n){

    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<j;
        }
        cout<<endl;
    }
}

void pattern3(int n){

    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<i;
        }
        cout<<endl;
    }
}

void pattern4(int n){

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= n-i+1; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}

void pattern5(int n){

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n-i+1; j++)
        {
            cout<<j;
        }
        cout<<endl;
    }
}

void pattern6(int n){

    for (int i = 0; i < n; i++)
    {
        // Space
        for (int j = 0; j < n-i+1; j++)
        {
            cout<<" ";
        }
        // Stars 
        for (int j = 0; j < 2*i+1; j++)
        {
            cout<<"*";
        }

        // Space
        for (int j = 0; j < n-i+1; j++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
}


void pattern7(int n){

    for (int i = 0; i < n; i++)
    {
        // Space
        for (int j = 0; j < i; j++)
        {
            cout<<" ";
        }
        // Stars 
        for (int j = 0; j < 2*n -(2*i+1); j++)
        {
            cout<<"*";
        }

        // Space
        for (int j = 0; j <i; j++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
}



void pattern8(int n){

    for (int i = 1; i <= 2*n-1; i++)
    {
        int stars = i;
        if(i>n) stars = 2*n-i;
        for (int j = 1; j <= stars; j++)
        {
            cout<<"*";
        }
       cout<<endl;
    }
}


void pattern9(int n){
    int start = 1;
    for (int i = 0; i < n; i++)
    {

        if(i%2 == 0) start=1;
        else start=0;
        for (int j = 0; j <= i; j++)
        {
            cout<<start;
            start = 1-start;
        }
       cout<<endl;
    }
}

void pattern10(int n){
    int space = 2*n-1;
    for (int i = 1; i <= n; i++)
    {
        // numbers
        for (int j = 1; j <= i; j++)
        {
            cout<<j;
        }
        //Space
        for (int j = 1; j <= space; j++)
        {
            cout<<" ";
        }
        //numbers
        for (int j = i; j >= 1; j--)
        {
            cout<<j;
        }
        cout<<endl;
        space -= 2;
    }
    
}

int main() {
    
    int t;
    cout<<"No. of Test Cases:";
    cin>>t;
    
    for (int i = 0; i < t; i++)
    {
        int n;
        cin>>n;
        // pattern6(n);
        // pattern7(n);
        pattern10(n);
    }
    

    return 0;
}