#include<bits/stdc++.h>
using namespace std;

int partition(int arr[], int s, int e){
    
    int pivot = arr[s];
    int count = 0;

    for (int i = s+1; i <= e; i++)
    {
        if(pivot >= arr[i]){
            count++;
        }
    }

    // place pivot at right position
    int pivotIndex = s + count;
    swap(arr[pivotIndex], arr[s]);

    // left and right part sort krte hai
    int i = s, j = e;

    while(i < pivotIndex && j > pivotIndex){

        while(arr[i] < pivot) {
            i++;
        }
        while(arr[j] > pivot){
            j--;
        }    
        
        if(i < pivotIndex && j > pivotIndex){
            swap(arr[i++],arr[j--]);
        }
    }

    return pivotIndex;
}

void QuickSort(int arr[], int s, int e){

    // Base Case
    if(s >= e) return ;

    // partition
    int p = partition(arr,s,e);  // p gives index

    // left part sort karo
    QuickSort(arr,s,p-1);

    // right part sort karo
    QuickSort(arr,p+1,e);
}


int main(){

    int arr[14] = {5,1,3,3,3,5,5,7,87,56,23,43,23,19};
    int n = 14;

    QuickSort(arr,0, n-1);

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    











    return 0;
}