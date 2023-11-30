#include <bits/stdc++.h>
using namespace std;

void NonZeros(int arr[], int n){
    int nonZero = 0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i] != 0){
            swap(arr[i],arr[nonZero]);
            nonZero++;
        }
    }

    
}

void printArray(int ans[], int m){
    for (int i = 0; i < m; i++)
    {
        cout<< ans[i] <<" ";
    }
    cout<<endl;
}

int main(){

    int arr[] = {1,0,5,0,11,9,0,0};

    NonZeros(arr, 8);

    printArray(arr,8);






    return 0;
}