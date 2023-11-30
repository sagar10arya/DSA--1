#include<bits/stdc++.h>
using namespace std;

/* HOMEWORK*/
/* 
Input: arr[] = {8, 4, 2, 1}
Output: 6
Explanation: Given array has six inversions: (8, 4), (4, 2), (8, 2), (8, 1), (4, 1), (2, 1)
*/

// following is naive approach whose time complexity is 0(n^2)
int countInversion(int arr[], int n){
    
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if(arr[i] > arr[j]) count++;
        }
        
    }
    return count;
}

// by using merge sort we can reduce time complexity to O(N * log N)

int main(){


    int arr[] = {3,5,6,9,1,2,7,8};

    int ans = countInversion(arr, 8);

    cout<<"Inversion count is: "<<ans<<endl;



    return 0;
}