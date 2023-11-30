#include<bits/stdc++.h>
using namespace std;

int main(){

    // Double-ended queues -- similar to vectors but we can perform insertion and deletion functions from both ends.
    deque<int> d;
    
    d.push_back(1);
    d.push_front(2); // push element at begin
    for(int i:d){
        cout<<i<<" ";
    } 
    cout<<endl;

    // d.pop_back(); // pop element from back
    // d.pop_front(); // pop element from front
    // for(int i:d){
    //     cout<<i<<" ";
    // }

    cout<<"Element at Index 1--> "<<d.at(1)<<endl;
    cout<<"Front element : "<< d.front()<<endl;
    cout<<"Back element : "<< d.back()<<endl;

    cout<<"Empty or not --> "<<d.empty()<<endl;

    cout<<"Before Erase --> "<< d.size();
    d.erase(d.begin(),d.begin()+1); // remove 1 element
    cout<<endl;
    cout<<"After Erase --> "<< d.size()<<endl;
    for(int i:d){
        cout<<i<<" ";
    }











    return 0;
}