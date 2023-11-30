#include<bits/stdc++.h>
using namespace std;

// in case of 2D arrays we have to specify column size
bool isPresent(int arr[][3], int target, int row, int column){
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
             if(arr[row][col] == target) return 1;
        }
        
    }
    return 0;
    
}

// printing row wise sum

void printSumRow(int arr[][3],int row, int col){
    cout<<"Row Wise Sum is: "<<endl;
    
    for (int row = 0; row < 3; row++)
    {
        int sum = 0;
        for (int col = 0; col < 3; col++)
        {
            sum += arr[row][col];
        }
        cout<<sum <<" ";  
    }
    cout<<endl;
}

// printing column wise sum

void printSumCol(int arr[][3],int row, int col){
    cout<<"Column Wise Sum is: "<<endl;
    
    for (int col = 0; col < 3; col++)
    {
        int sum = 0;
        for (int row = 0; row < 3; row++)
        {
            sum += arr[row][col];
        }
        cout<<sum <<" ";  
    }
    cout<<endl;
}

// largest Row sum

int largestRowSum(int arr[][3],int row, int col){
        int maxi = INT_MIN;
        int rowIndex = -1;
    for (int row = 0; row < 3; row++)
    {
        int sum = 0;
        
        for (int col = 0; col < 3; col++)
        {
            sum += arr[row][col];
        }
        if(sum > maxi){
            maxi = sum;
            rowIndex = row;
        }
    }
    return rowIndex;
}

int main(){

    int arr1[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin>> arr1[i][j];
        }
        
    }
    cout<<"2D Array:"<<endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<< arr1[i][j] << " ";
        }
        cout<<endl;
    }
    
/*
    cout<<"Search Element: "<<endl;
    int target;
    cin>>target;

    if(isPresent(arr1,target,3,3)){
        cout<<"Element Found!"<<endl;
    }
    else{
        cout<<"Not Found"<<endl;
    }

    printSumRow(arr1,3,3);
    printSumCol(arr1,3,3);
*/
    int ans = largestRowSum(arr1,3,3);
    cout<<"The largest row sum is at Index "<<ans<<endl;    








    return 0;
}