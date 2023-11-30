#include<bits/stdc++.h>
using namespace std;

/*          Subsets of strings      */

void solve(vector<int> nums,vector<int> output, int index,vector<vector<int>> &ans){

    // Base Case
    if(index  >= nums.size()){
        ans.push_back(output);
        return;
    }

    // exclude
    solve(nums,output, index+1,ans);

    // include
    int element = nums[index];
    output.push_back(element);
    solve(nums,output,index+1,ans);
}

vector<vector<int>> subsets(vector<int> &nums){

    vector<vector<int>> ans;
    vector<int> output;
    int index  = 0;
    solve(nums,output,index,ans);
    return ans;
}


// int main(){

//     vector<int> v1;
//     int a[] = { 1, 2, 3 };
//     v1.assign(a,a+3);
    
//     subsets(v1);
                                
//     return 0;
// }