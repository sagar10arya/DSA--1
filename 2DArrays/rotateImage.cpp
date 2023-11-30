#include<bits/stdc++.h>
using namespace std;

/*
You are given an n x n 2D matrix representing an image, rotate the image by 90 degrees (clockwise).

You have to rotate the image in-place, which means you have to modify the input 2D matrix directly. DO NOT allocate another 2D matrix and do the rotation.

 Input: matrix = [[5,1,9,11],[2,4,8,10],[13,3,6,7],[15,14,12,16]]
Output: [[15,13,2,5],[14,3,4,1],[12,6,8,9],[16,7,10,11]]
*/


class Solution {
    private:

    void transpose(vector<vector<int>>& matrix){
        int row = matrix.size();

        for(int i = 0; i < row; i++){
            for(int j=0; j<=i; j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }
    }

public:
    void rotate(vector<vector<int>>& matrix) {
        
        int rows = matrix.size();

        transpose(matrix);
        for(int i=0;i<rows;i++){
            reverse(matrix[i].begin(), matrix[i].end());
        }

    }


};