#include<bits/stdc++.h>
using namespace std;

int main(){

    queue<string> q;

    q.push("Football");
    q.push("is");
    q.push("Love");

    cout<<"Top Element-->"<<q.front()<<endl;
    cout<<"Size before pop-->"<<q.size()<<endl;
    q.pop();
    cout<<"Top Element-->"<<q.front()<<endl;

    cout<<"Size after pop-->"<<q.size()<<endl;

    cout<<"Empty or not-->"<<q.empty()<<endl;





    return 0;
}