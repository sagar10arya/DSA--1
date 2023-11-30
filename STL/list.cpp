#include<bits/stdc++.h>
using namespace std;

int main(){

    list<int> l;

    list<int> n(5,100);
    cout<<"Print n"<<endl;
    for(int i:n){
        cout<<i<<" ";
    }
    cout<<endl;

    l.push_back(2);
    l.push_front(1);
    for(int i:l){
        cout<<i<<" ";
    } 
    cout<<endl;

    cout<<"Before Erase --> "<< l.size();
    l.erase(l.begin()); // remove 1 element
    cout<<endl;
    cout<<"After Erase --> "<< l.size()<<endl;
    for(int i:l){
        cout<<i<<" ";
    }


    return 0;
}