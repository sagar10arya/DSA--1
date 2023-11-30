#include<bits/stdc++.h>
using namespace std;

int BinarySearch(int arr[], int size, int key){
    int start=0;
    int end=size-1;
    // int mid = (start + end)/2;
    int mid = start + (end-start)/2;

    while (start <= end)
    {
        if(arr[mid] == key){
            return mid;
        }
        if(arr[mid] > key){
            end = mid - 1;
        }
        else{
            // key < arr[mid]
            start = mid + 1;
        }

        mid = start + (end-start)/2;

    }
    return -1;
    
}

int main(){

    int even[8] = {2,4,6,8,14,16,18,22};
    
    int result = BinarySearch(even, 8, 4);

    cout<< " The key is at index "<<result;



    return 0;
}