#include<bits/stdc++.h>
using namespace std;

int main(){

    // stored in form of key-pairs

    map<int,string> m;

    m[1] = "Football";
    m[14] = "Madrid";
    m[3] = "love";

    // for(auto i:m){
    //     cout<<i.first<<endl;
    // }
    // cout<<endl;
    m.insert({5,"Ronaldo"});

    cout<<"Value Before Erase "<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<endl;

    cout<<"Finding 5--> "<<m.count(5)<<endl;
    cout<<"Finding -13--> "<<m.count(-13)<<endl;

    m.erase(5);
    cout<<"Value After Erase "<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<endl;


    return 0;
}