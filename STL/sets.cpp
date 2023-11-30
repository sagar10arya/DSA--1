#include<bits/stdc++.h>
using namespace std;

int main(){

    // sets stores unique elements
    // implemented using BST, elements once enter cannot be modified, elements are returned in sorted order
    set<int> s;

    s.insert(5);
    s.insert(5);
    s.insert(3);
    s.insert(3);
    s.insert(5);
    s.insert(5);
    s.insert(8);
    s.insert(5);
    s.insert(6);
    s.insert(6);
    s.insert(6);
    // above insertion will come once and in sorted way
    for(auto i:s){
        cout<<i<<" ";
    }
    cout<<endl;

    set<int>::iterator it = s.begin();
    it++;

    s.erase(it);
    for(auto i:s){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"-5 is present or not--> "<<s.count(-5)<<endl;

    set<int>::iterator itr = s.find(5);

    for(auto it=itr;it!=s.end();it++){
        cout<<*it<<" ";
    }

    return 0;
}