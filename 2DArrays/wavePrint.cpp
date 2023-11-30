#include<bits/stdc++.h>
using namespace std;

vector<int> wavePrirnt(vector<vector<int>> arr, int nRows, int mCols){

    vector<int> ans;

    for (int col = 0; col < mCols; col++)
    {
        if(col&1){
            // odd case - bottom to top
            for (int row = nRows-1; row > 0; row--)
            {
                cout<<arr[row][col];
                ans.push_back(arr[row][col]);
            }

        }
        else{
            // even case -- top to bottom
            for (int row = 0; row < nRows; row++)
            {
                cout<<arr[row][col];
                ans.push_back(arr[row][col]);
            }
            

        }
    }
    


}