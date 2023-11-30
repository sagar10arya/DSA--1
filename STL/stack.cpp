#include<bits/stdc++.h>
using namespace std;

int main(){

    stack<string> s;

    s.push("Football");
    s.push("is");
    s.push("Love");

    cout<<"Top Element-->"<<s.top()<<endl;

    s.pop();
    cout<<"Top Element-->"<<s.top()<<endl;

    cout<<"Size of Stack-->"<<s.size()<<endl;

    cout<<"Empty or not-->"<<s.empty()<<endl;





    return 0;
}