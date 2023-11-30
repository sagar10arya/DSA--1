#include<bits/stdc++.h>
using namespace std;

int main(){

    // VECTOR

    vector<int> a(5,1); // Here 5 is the size  assigned and 1 will be the value given to all


    vector<int> v;
    // capacity tells the memory assigned to the vector // initially 0
    cout<<"Capactity -->" << v.capacity() << endl;

    v.push_back(1);
    cout<<"Capactity -->" << v.capacity() << endl;
    v.push_back(2);
    cout<<"Capactity -->" << v.capacity() << endl;
    // if we add a element more than the capacity then it gets doubled
    v.push_back(3);
    cout<<"Capactity -->" << v.capacity() << endl;
    // Size tells us the element present in  the vector
    cout<<"Size -->" << v.size() << endl;

    cout<<"Element at Index 2--> "<<v.at(2)<<endl; //same we can do in array stl too
    cout<<"Front element : "<< v.front()<<endl; //same we can do in array stl too
    cout<<"Back element : "<< v.back()<<endl; //same we can do in array stl too

    cout<<"Before pop "<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    // pop removes the last element
    v.pop_back();
    
    cout<<"After pop "<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"Before clear the size --> "<< v.size();
    // clear func clears the vector but the capacity will be the same
    v.clear();
    cout<<endl;
    cout<<"After clear the size --> "<< v.size();


    return 0;
}
