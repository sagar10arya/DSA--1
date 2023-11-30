#include<bits/stdc++.h>
using namespace std;

/*          Subsequence of strings      */

void solve(string str, string output, int index, vector<string> &ans){

    // Base Case
    if(index  >= str.length()){
        // if we dont want ""
        if(output.length() > 0){
            ans.push_back(output);
        }
        return;
    }

    // exclude
    solve(str,output, index+1,ans);

    // include
    int element = str[index];
    output.push_back(element);
    solve(str,output,index+1,ans);
}

vector<string> subsequence(string str){

    vector<string> ans;
    string output = "";
    int index  = 0;
    solve(str,output,index,ans);
    return ans;
}
