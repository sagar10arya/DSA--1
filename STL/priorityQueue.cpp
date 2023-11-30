#include<bits/stdc++.h>
using namespace std;

int main(){
    // Max Heap
    priority_queue<int> maxi;

    // Min Heap
    priority_queue<int, vector<int>, greater<int> > min;

    maxi.push(3);
    maxi.push(4);
    maxi.push(1);
    maxi.push(2);

    cout<<"Maxi Size-->"<<maxi.size()<<endl;
    int n = maxi.size();
    for (int i = 0; i < n; i++)
    {
        cout<<maxi.top()<<" ";
        maxi.pop();
    }

    min.push(3);
    min.push(4);
    min.push(1);
    min.push(2);

    cout<<"Maxi Size-->"<<min.size()<<endl;
    int m = min.size();
    for (int i = 0; i < m; i++)
    {
        cout<<min.top()<<" ";
        min.pop();
    }
    
    

    return 0;
}