#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> v;

    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);

    cout<<"Finding 6--> "<<binary_search(v.begin(),v.end(), 6)<<endl;

    cout<<"Lower Bound--> "<<lower_bound(v.begin(),v.end(), 6) - v.begin()<<endl; //returns iterator
    cout<<"Upper Bound--> "<<upper_bound(v.begin(),v.end(), 6) - v.begin()<<endl; //returns iterator

    string s = "abcd";
    reverse(s.begin(), s.end());
    cout<<s<<endl;

    rotate(v.begin(), v.begin()+2, v.end());
    cout<<"After Rotate "<<endl;
    for(auto i:v){
        cout<<i<<" ";
    }
    cout<<endl;

    sort(v.begin(),v.end());
    for(auto i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}