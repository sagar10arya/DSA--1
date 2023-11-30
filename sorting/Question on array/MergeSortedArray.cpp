#include <bits/stdc++.h>
using namespace std;

void MergeSortedArray(int arr1[], int n, int arr2[], int m, int arr3[]){

    int i=0, j=0;
    int k=0;

    while(i<n && j<m){
        
        if(arr1[i]<arr2[j]){
            arr3[k] = arr1[i];
            i++;
            k++;
        }
        else{
            arr3[k] = arr2[j];
            j++;
            k++;
        }
    }

    // copy first array k element
    while(i<n){
        arr3[k] = arr1[i];
        i++;
        k++;
    }

    // copy second array k remaining element
    while(j<m){
        arr3[k] = arr2[j];
        j++;
        k++;
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

    int arr1[5] = {1,3,5,7,9};
    int arr2[3] = {2,4,6};
    int arr3[8] = {};

    MergeSortedArray(arr1, 5, arr2, 3, arr3);

    printArray(arr3,8);






    return 0;
}