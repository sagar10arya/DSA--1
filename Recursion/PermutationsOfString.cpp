#include<bits/stdc++.h>
using namespace std;

/*
Given an array nums of distinct integers, return all the possible permutations. You can return the answer in any order.

Example 1:

Input: nums = [1,2,3]
Output: [[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]]
<!-------SAME WE CAN DO WITH STRING---------->
*/

class Solution {
private:
    void solve(vector<int> nums, int index, vector<vector<int>> &ans){

        // Base Case
        if(index >= nums.size()){
            ans.push_back(nums);
            return ;
        }

        for(int i=index; i<nums.size(); i++){
            swap(nums[index], nums[i]);
            solve(nums,index+1,ans);
            swap(nums[index],nums[i]); // Backtrack --> to get back the string which was swapped
        }
    }

public:
    vector<vector<int>> permute(vector<int>& nums) {
        
        vector<vector<int>> ans;
        int index = 0;

        solve(nums,index,ans);

        return ans;
    }
};