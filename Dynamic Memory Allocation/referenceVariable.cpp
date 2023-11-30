#include <bits/stdc++.h>
using namespace std;

// PASS BY VALUE
void update1(int n){
    n++;
}

// PASS BY REFERENCE
void update2(int& n){
    n++;
}

int main(){
/*
    int i = 7;

    // reference variable
    int &j = i;

    cout << i << " "<< j << endl;
    i++;
    j++;
    cout << i << " " << j << endl;
*/
    int  n = 10;

    cout<<"Before " << n <<endl;
    // update1(n);
    update2(n);
    cout<<"After " << n <<endl;


    return 0;
}