#include<bits/stdc++.h>
using namespace std;
/*
A celebrity is a person who is known to all but does not know anyone at a party. If you go to a party of N people, find if there is a celebrity in the party or not.
A square NxN matrix M[][] is used to represent people at the party such that if an element of row i and column j  is set to 1 it means ith person knows jth person. Here M[i][i] will always be 0.
Note: Follow 0 based indexing.
Follow Up: Can you optimize it to O(N)
*/

class Solution 
{
    private:
    bool knows(vector<vector<int> >& M, int a, int b, int n){
        if(M[a][b] == 1)
            return true;
        else
            return false;
    }
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        stack<int> s;
        // Step1: Push All Elements in the Stack
        for(int i=0; i<n;i++){
            s.push(i);
        }
        
        // Step2: get two elements and compare them
        while(s.size() > 1){
            int a = s.top();
            s.pop();
            int b = s.top();
            s.pop();
            
            if(knows(M,a,b,n)){
                s.push(b);
            }
            else{
                s.push(a);
            }
        }
        int candidate = s.top();
        // Step3: Single element in stack is potential celebrity
        // so verify it
        
        int zeroCount = 0;
        
        for(int i=0; i<n; i++){
            if(M[candidate][i] == 0)
                zeroCount++;
        }
        
        // All Zeroes
        if(zeroCount != n)
            return -1;
        
        // Column Check
        
        int oneCount = 0;
        
        for(int i=0; i<n; i++){
            if(M[i][candidate] == 0)
                oneCount++;
        }
        
        return candidate;
        
    }
};